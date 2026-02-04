//#include "stdafx.h"
#include <iostream>
using namespace std;

class CShape{
public:
	CShape(){ 
	}
	virtual ~CShape(){ 
	}
	virtual void Draw(){ 
		cout << "CShape::Draw()" << endl; 
	}
};

class CRectangle: public CShape{
public:
	virtual void Draw(){ 
		cout << "CRectangle::Draw()" << endl; 
	}
};

class CCircle: public CShape{
public:
	virtual void Draw(){ 
		cout << "CCircle::Draw()" << endl; 
	}
};

//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char* argv[]){
	cout << "Enter the shape number [1: Square, 2: Circle]: " << endl;
	int nInput = 0;
	cin >> nInput;

	CShape *pShape = nullptr;
	if (nInput == 1){
		pShape = new CRectangle;
	}else if (nInput == 2){
		pShape = new CCircle;
	}else{
		pShape = new CShape;
	}
	
	pShape->Draw();

	CRectangle *pRect = dynamic_cast<CRectangle*>(pShape);
	if (pRect != NULL){
		cout << "CRectangle::Draw()" << endl;
	}else{
		CCircle *pCricle = dynamic_cast<CCircle*>(pShape);
		if (pCricle != NULL){
			cout << "CCircle::Draw()" << endl;
		}else{
			cout << "CShape::Draw()" << endl;
		}
	}

	return 0;
}
