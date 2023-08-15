#include <iostream>
#include <cmath>

/* Q6 */
using namespace std;

int main(int argc, char** argv) {
	
	float raio;
	const float PI = 3.14;
	
	cout << "Digite o raio do circulo:" << endl;
	
	cin >> raio;
	
	float quadrado = pow(raio, 2);


	cout <<"Area do circulo:" << PI * quadrado;
	
	system("pause");
	return 0;
}

/* Q6 
using namespace std;

int main(int argc, char** argv) {
	
	float raio;
	const float PI = 3.14;
	cout << "Digite o raio do circulo:" << endl;
	
	cin >> raio;
	
	cout <<"Area do circulo:" << PI * (raio * raio);
	
	system("pause");
	return 0;

}
*/
