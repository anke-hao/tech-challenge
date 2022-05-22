using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Algorithm : MonoBehaviour
{

    public TextAsset csvData;
    [System.Serializable]

    public class Person {
        public string timeStamps;
        public string occupation;
        public int answer1;
        public int answer2;
        public int answer3;
        public int answer4;
        public int answer5;
        public int answer6;
        public int answer7;
        public int answer8;
        public int answer9;
        public int answer10;
        public int answer11;
        public int answer12;
        public int answer13;
        public int answer14;
        public int answer15;
        public int answer16;
    }
    [System.Serializable]

    public class PersonList {
        public Person[] people;
    }

    public PersonList peopleList = new PersonList();

    // Start is called before the first frame update
    void Start()
    {
        ReadCSV();
    }  

    void ReadCSV() {
        string[] data = csvData.text.Split(new string[] { ",", "\n" }, StringSplitOptions.None);

        int tableSize = data.Length / 18 - 1;
        peopleList.people = new Person[tableSize];

        for(int i = 0; i < tableSize; i++) {
            peopleList.people[i] = new Person();
            peopleList.people[i].timeStamps = data[4 * (i + 1)];
            peopleList.people[i].occupation = data[4 * (i + 1) + 1];
            peopleList.people[i].answer1 = Int32.Parse(data[4 * (i + 1) + 2]);
            peopleList.people[i].answer2 = Int32.Parse(data[4 * (i + 1) + 3]);
            peopleList.people[i].answer3 = Int32.Parse(data[4 * (i + 1) + 4]);
            peopleList.people[i].answer4 = Int32.Parse(data[4 * (i + 1) + 5]);
            peopleList.people[i].answer5 = Int32.Parse(data[4 * (i + 1) + 6]);
            peopleList.people[i].answer6 = Int32.Parse(data[4 * (i + 1) + 7]);
            peopleList.people[i].answer7 = Int32.Parse(data[4 * (i + 1) + 8]);
            peopleList.people[i].answer8 = Int32.Parse(data[4 * (i + 1) + 9]);
            peopleList.people[i].answer9 = Int32.Parse(data[4 * (i + 1) + 10]);
            peopleList.people[i].answer10 = Int32.Parse(data[4 * (i + 1) + 11]);
            peopleList.people[i].answer11 = Int32.Parse(data[4 * (i + 1) + 11]);
            peopleList.people[i].answer12 = Int32.Parse(data[4 * (i + 1) + 12]);
            peopleList.people[i].answer13 = Int32.Parse(data[4 * (i + 1) + 13]);
            peopleList.people[i].answer14 = Int32.Parse(data[4 * (i + 1) + 14]);
            peopleList.people[i].answer15 = Int32.Parse(data[4 * (i + 1) + 15]);
            peopleList.people[i].answer16 = Int32.Parse(data[4 * (i + 1) + 16]);
        }
    }
}
