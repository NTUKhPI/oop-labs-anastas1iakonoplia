#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include <memory>
#include <numeric>
#include <iomanip>
#include <windows.h> 
#include <stdexcept>
#include <sstream> 

using namespace std;

enum class StudentType {
    Bachelor,
    Master,
    PhD
};


class Student {
public:
    string pib;
    string group;
    vector<int> grades;
    StudentType type;

    Student(string name, string grp, StudentType t) : pib(name), group(grp), type(t) {}
    virtual ~Student() {}

    string getPIB() const { return pib; }
    string getGroup() const { return group; }


    string getGradesString() const {
        stringstream ss;
        for (size_t i = 0; i < grades.size(); ++i) {
            ss << grades[i] << (i < grades.size() - 1 ? " " : "");
        }
        return ss.str();
    }

    void setPIB(string name) { pib = name; }
    void setGroup(string grp) { group = grp; }

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    void clearGrades() { grades.clear(); }

    double getAverageGrade() const {
        if (grades.empty()) return 0.0;
        double sum = accumulate(grades.begin(), grades.end(), 0.0);
        return sum / grades.size();
    }

    virtual void saveToFile(ofstream& ofs) const {
        ofs << (int)type << endl;
        ofs << pib << endl;
        ofs << group << endl;
        ofs << grades.size() << endl;
        for (int g : grades) ofs << g << " ";
        ofs << endl;
    }

    virtual void loadFromFile(ifstream& ifs) {
        ifs >> ws;
        getline(ifs, pib);
        getline(ifs, group);
        int count;
        ifs >> count;
        grades.clear();
        for (int i = 0; i < count; ++i) {
            int g;
            ifs >> g;
            grades.push_back(g);
        }
    }
};


class Researcher {
public:
    string researchTopic;
    string supervisor;

    Researcher(string topic = "", string sup = "") : researchTopic(topic), supervisor(sup) {}

    void setTopic(string t) { researchTopic = t; }
    void setSupervisor(string s) { supervisor = s; }

    void saveResearch(ofstream& ofs) const {
        ofs << researchTopic << endl;
        ofs << supervisor << endl;
    }

    void loadResearch(ifstream& ifs) {
        ifs >> ws;
        getline(ifs, researchTopic);
        getline(ifs, supervisor);
    }
};


class Bachelor : public Student {
public:
    string thesisTopic;
    string interests;
    string participatedInProjects;

    Bachelor(string name, string grp) : Student(name, grp, StudentType::Bachelor) {}

    void setThesis(string t) { thesisTopic = t; }
    void setInterests(string i) { interests = i; }
    void setProjectParticipation(string p) { participatedInProjects = p; }

    bool isExcellent() const {
        return getAverageGrade() >= 90.0;
    }

    void saveToFile(ofstream& ofs) const override {
        Student::saveToFile(ofs);
        ofs << thesisTopic << endl;
        ofs << interests << endl;
        ofs << participatedInProjects << endl;
    }

    void loadFromFile(ifstream& ifs) override {
        Student::loadFromFile(ifs);
        ifs >> ws;
        getline(ifs, thesisTopic);
        getline(ifs, interests);
        getline(ifs, participatedInProjects);
    }
};


class Master : public Student, public Researcher {
public:
    Master(string name, string grp) : Student(name, grp, StudentType::Master), Researcher() {}

    void saveToFile(ofstream& ofs) const override {
        Student::saveToFile(ofs);
        Researcher::saveResearch(ofs);
    }

    void loadFromFile(ifstream& ifs) override {
        Student::loadFromFile(ifs);
        Researcher::loadResearch(ifs);
    }
};


class PhD : public Student, public Researcher {
public:
    PhD(string name, string grp) : Student(name, grp, StudentType::PhD), Researcher() {}

    void saveToFile(ofstream& ofs) const override {
        Student::saveToFile(ofs);
        Researcher::saveResearch(ofs);
    }

    void loadFromFile(ifstream& ifs) override {
        Student::loadFromFile(ifs);
        Researcher::loadResearch(ifs);
    }
};