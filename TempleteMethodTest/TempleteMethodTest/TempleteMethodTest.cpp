#include <iostream>
using namespace std;

class Library
{
public:
    void Step1() { 
        cout << "library step1" << endl; 
    }

    virtual void Step2() = 0;

    void Step3(){
        cout << "library step3" << endl;
    }

    virtual void Step4() = 0;

    void Run()
    {
        Step1();
        Step2();
        Step3();
        Step4();
    }

    virtual ~Library(){
        cout << "delete library" << endl;
    }
};

class Client :public Library
{
public:
    void Step2() override {
        cout << "Client step2" << endl;
    }

	void Step4() override {
		cout << "Client step4" << endl;
	}

    ~Client() {
        cout << "delete client" << endl;
    }
};


int main()
{
    Library* testFlow = new Client;
    testFlow->Run();
    delete testFlow;
    
}