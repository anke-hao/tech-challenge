using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using NumSharp;
using System.Linq;

public class Algorithm : MonoBehaviour
{
    public TextAsset csvData;
    // CORRECT THESE VALUES !!!!!!!!!!!!
    // CORRECT THESE VALUES !!!!!!!!!!!!
    // CORRECT THESE VALUES !!!!!!!!!!!!
    public int rows = 79;
    public int cols = 17;
    GameObject phil;
    // Start is called before the first frame update
    public void Start()
    {
        phil = GameObject.FindGameObjectWithTag("Player");
        int[] answers = phil.GetComponent<Vector>().answers;
        var vector_answers = np.empty(cols - 1);
        
        for(int i = 0; i < answers.Length; i++) {
            vector_answers[i] = answers[i];
        }

        var matrix_questions = np.empty((rows - 1, cols - 1));
        var vector_occupation = np.empty(rows - 1);

        string[] data = csvData.text.Split(new string[] { "\n" }, StringSplitOptions.None);

        for(int i = 1; i < data.Length; i++) {
            string[] row = data[i].Split(new string[] { "," }, StringSplitOptions.None);
            
            for(int j = 1; j < row.Length; j++) {
                matrix_questions[i - 1][j - 1] = Int32.Parse(row[j]);
            }
            vector_occupation[i - 1] = Int32.Parse(row[0]);
        }
        
        print(matrix_questions);
        print(vector_occupation);
        print(vector_answers);

        // int k = Convert.ToInt16(Math.Sqrt(rows - 1));
        int k = 1;
        print(knn(matrix_questions, vector_occupation, vector_answers, k));
    }  

    public int knn(NDArray questions, NDArray occupation, NDArray answers, int k) {
        int[] results = new int[k];
        double[] lengths = new double[rows - 1];
        NDArray distances = np.empty(rows - 1);

        for(int i = 0; i < questions.shape[0]; i++) {
            NDArray difference_vector = np.subtract(questions[i], answers);
            int dot_product = 0;
            for(int j = 0; j < cols - 1; j++) {
                int element = Int32.Parse(difference_vector[j].ToString());
                dot_product += element * element;
            }
            lengths[i] = Math.Sqrt(dot_product);
            print("Length " + i + ": " + lengths[i]);
        }
        
        for(int i = 0; i < lengths.Length; i++) {
            distances[i] = lengths[i];
        }
        var args = distances.argsort<double>();
        print(args);

        for(int i = 0; i < k; i++) {
            int index = Int32.Parse(args[i].ToString());
            results[i] = Int32.Parse(occupation[index].ToString());
            print("k=" +(i+1) + ": " + results[i]);
        }

        var recommended_occupation = results.GroupBy(item => item).OrderByDescending(global => global.Count()).Select(g => g.Key).First();
        return recommended_occupation;
    }
}