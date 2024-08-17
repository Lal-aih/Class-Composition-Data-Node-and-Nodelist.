#include <iostream>
#include <vector>

using namespace std;

//Creation of class Data
class Data{
private:
    vector<double> time; //The array where we store times
    int distance; //Variable to represent distance ran
    double min, max, average; //Variables to represent the minimum, maximum, and average times

public:
    Data();
    Data(const vector<double>& t, int d);

    //the following functions are setters and getters for each variable
    const vector<double>& getTime() const{
    	return time;
    }
    void setTime(vector<double>& t){
    	time = t;
    }
    int getDistance() const{
    	return distance;
    }
    void setDistance(int d){
    	distance = d;
    }
    void statistics(){ //A function to compute the min, max, and average
    	if (time.empty()){
    		min = max = average = 0;
    		return;
    	}

    	min = max = time[0];
    	double sum = 0;

    	for(double t :time){
    	if (t > max){
    		max = t;
    	}
    	if (t < min){
    		min = t;
    	}

    	sum += t;

    	average = sum/5;
    }
    }
    void display(){ //Function to output the results of statistics
    	cout << "\nYour times are: " << endl;
    	for (int i = 0 ; i<=4 ; i++){
    		cout << "Time " << i+1 << ": " << time[i] << endl;
    	}
    	cout << "\nMinimum time: " << min << endl;
    	cout << "Maximum time: " << max << endl;
    	cout << "Average time: " << average << endl;
    }
};

Data::Data(){
	distance = 0;
	min = max = average = 0;
}

Data::Data(const vector<double>& t, int d){
	time = t;
	distance =d;
	min = max = average = 0;
}

int main(){

	int distance; //stores the distance
	vector<double> times; //stores the times

	//inputs for the distance and times
	cout << "Enter the distance." << endl;
	cin >> distance;

	cout << "Enter your times." << endl;
	int temp;

	for (int i = 0; i<5 ; i++){
		cout << "Time " << i+1 << ":";
		cin >> temp;
		times.push_back(temp);
	}

	//Creation of object data of class Data
	Data data(times, distance);

	//call to functions in class Data
	data.statistics();
	data.display();

	return 0;
}
