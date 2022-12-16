using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using NumSharp;
using System.Linq;

public class Algorithm : MonoBehaviour
{
    public TextAsset csvData;
    public int rows = 91;
    public int cols = 17;
    GameObject phil;
    public int result;
    int[] vector_answers;
    int[,] matrix_questions;
    int[] vector_occupation;
    int[] answers;
    // Start is called before the first frame update
    void Start()
    {
        phil = GameObject.FindGameObjectWithTag("Player");
        answers = new int[cols - 1];
        vector_answers = new int[cols - 1];
        vector_occupation = new int[rows - 1];
        matrix_questions = new int[rows - 1, cols - 1];

        string[] data = new string[rows];
        data = csvData.text.Split(new string[] { "\n" }, StringSplitOptions.None);
        string[] row = new string[cols];
        for(int i = 1; i < data.Length; i++) {
            row = data[i].Split(new string[] { "," }, StringSplitOptions.None);            
            for(int j = 1; j < row.Length; j++) {
                matrix_questions[i - 1, j - 1] = Int32.Parse(row[j]);
            }
            vector_occupation[i - 1] = Int32.Parse(row[0]);
        }
    }  

    int knn(NDArray questions, NDArray occupation, NDArray answers, int k) {
        int[] results = new int[k];
        double[] lengths = new double[rows - 1];
        NDArray distances = np.empty(rows - 1);

        for(int i = 0; i < questions.shape[0]; i++) {
            NDArray difference_vector = np.subtract(questions[i], answers);
            int total = 0;
            for(int j = 0; j < cols - 1; j++) {
                int element = Int32.Parse(difference_vector[j].ToString());
                total += Math.Abs(element);
            }
            lengths[i] = total;
        }
        
        for(int i = 0; i < lengths.Length; i++) {
            distances[i] = lengths[i];
        }
        var args = distances.argsort<double>();
        for(int i = 0; i < k; i++) {
            int index = Int32.Parse(args[i].ToString());
            results[i] = Int32.Parse(occupation[index].ToString());
        }

        var recommended_occupation = results.GroupBy(item => item).OrderByDescending(global => global.Count()).Select(g => g.Key).First();
        return recommended_occupation;
    }
    public int getKNN() {
        int k = 11;
        answers = phil.GetComponent<Vector>().answers;
        for(int i = 0; i < answers.Length; i++) {
            vector_answers[i] = answers[i];
        }
        result = knn(matrix_questions, vector_occupation, vector_answers, k);
        return result;
    }
}