//#include<iostream>
//using namespace std;
//float car1_bill_function(float &carhour);
//float car2_bill_function(float &carhour);
//float car3_bill_function(float &carhour);
//int main()
//{
//	float car1_bill = 0, car2_bill = 0, car3_bill = 0;
//	float parking_hour_car1, parking_hour_car2, parking_hour_car3;
//	char try_again;
//	do
//	{
//		car1_bill = car1_bill_function(parking_hour_car1);
//		car2_bill = car2_bill_function(parking_hour_car2);
//		car3_bill = car3_bill_function(parking_hour_car3);
//		cout << "Car\t\tHours\t\tCharges" << endl;
//		cout << "1\t\t" << parking_hour_car1 << "\t\t" << car1_bill << endl;
//		cout << "2\t\t" << parking_hour_car2 << "\t\t" << car2_bill << endl;
//		cout << "3\t\t" << parking_hour_car3 << "\t\t" << car3_bill << endl;
//		
//		cout << "Do you want to try again(Y/N) : ";
//		cin >> try_again;
//		return 0;
//	} while (try_again=='Y'||try_again=='y');
//	
//}
//float car1_bill_function(float &carhour)
//{
//	float parking_bill_car1 = 0;
//	do
//	{
//		cout << " Total Hours Of Parking For Car 1 = ";
//		cin >> carhour;;
//		if (carhour >= 1.0 && carhour <= 3.0)
//			parking_bill_car1 = 2.0;
//		else if (carhour >= 3.0 && carhour < 24.0)
//		{
//			float new_parking_hour_car1 = carhour - 3.0;
//			parking_bill_car1 = 2.0 + (new_parking_hour_car1 * 0.5);
//		}
//		else if (carhour <= 24.0)
//		{
//			parking_bill_car1 = 10.0;
//		}
//		else
//			cout << " Parking Hours cannot be more than 24 hours" << endl;
//	} while (carhour>24.0); 
//	return parking_bill_car1;
//}
//float car2_bill_function(float &carhour)
//{
//	float parking_bill_car2 = 0;
//	do
//	{
//		cout << " Total Hours Of Parking For Car 2 = ";
//		cin >> carhour;
//		if (carhour >= 1.0 && carhour <= 3.0)
//			parking_bill_car2 = 2.0;
//		else if (carhour >= 3.0 && carhour < 24.0)
//		{
//			float new_parking_hour_car2 = carhour - 3.0;
//			parking_bill_car2 = 2.0 + (new_parking_hour_car2 * 0.5);
//		}
//		else if (carhour <= 24.0)
//		{
//			parking_bill_car2 = 10.0;
//		}
//		else
//			cout << " Parking Hours cannot be more than 24 hours" << endl;
//	} while (carhour>24.0);
//	return parking_bill_car2;
//}
//float car3_bill_function(float &carhour)
//{
//	float parking_bill_car3 = 0;
//	do
//	{
//		cout << " Total Hours Of Parking For Car 3 = ";
//		cin >> carhour;
//		if (carhour >= 1.0 && carhour <= 3.0)
//			parking_bill_car3 = 2.0;
//		else if (carhour >= 3.0 && carhour < 24.0)
//		{
//			float new_parking_hour_car3 = carhour - 3.0;
//			parking_bill_car3 = 2.0 + (new_parking_hour_car3 * 0.5);
//		}
//		else if (carhour <= 24.0)
//		{
//			parking_bill_car3 = 10.0;
//		}
//		else
//			cout << " Parking Hours cannot be more than 24 hours" << endl;
//	} while (carhour>24.0);
//	return parking_bill_car3;
//}