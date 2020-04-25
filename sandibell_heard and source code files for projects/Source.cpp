#include <iostream>
#include <string>
// other flie name that sent Amber Alert 
#include "Sent_Amber_Alert.h"
// other flie name that setup Amber Alert 
#include "Setup_Amber_Alert.h"
#include <Windows.h>

using namespace std;


void information_Amber_Alert(string inforData)
{
	cout << inforData << "Victim is Lisa nana age 8.Suspect Unknow the Vehicle is a red Honda civic plate #NONV 907\n";
}

void Amber_Alert(string Emergency)
{
	cout << Emergency << "Contact 911 if you see something or know something!!";
}

int main()
{
	// Title 
	cout << "\n\n\t\t********** Amber Alert  ***********";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	information_Amber_Alert("Emergency Alert 1:30 /LISA NANA: ");
	 SetupSoundAlert();
	
	 SetupEmergency();
	 Amber_Alert("Know information of LISA NANA: ");
	 SetupBroadcast();
	 SetupSMSTextmessage();
	 Senttextmessage();
	 SentBoradcast();
	 SentRoadsign();
	 Beep(2090, 2000);
	 cin.get();
	return 0;
}

