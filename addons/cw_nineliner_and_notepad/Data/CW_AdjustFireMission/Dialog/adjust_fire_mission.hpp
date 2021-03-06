class CW_ADJUST_FIRE_MISSION
{
	idd = -1;
	movingenable = true;
	
	class Controls
	{
		class cw_adjustfiremission_background: cw_afm_picture
		{
			idc = 1200;
			text = "\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\adjustfiremission.paa";
			x = -0.0614583 * safezoneW + safezoneX;
			y = 0.236103 * safezoneH + safezoneY;
			w = 0.423958 * safezoneW;
			h = 0.758704 * safezoneH;
			moving = 1;
		};
		class cw_adjustfiremission_enableControls_1: cw_afm_button
		{
			idc = 1600;
			x = 0.29375 * safezoneW + safezoneX;
			y = -0.126756 * safezoneH + safezoneY;
			w = 1.75885 * safezoneW;
			h = 2.562 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_2: cw_afm_button
		{
			idc = 1601;
			x = -1.64271 * safezoneW + safezoneX;
			y = -0.148747 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_3: cw_afm_button
		{
			idc = 1602;
			x = -0.101562 * safezoneW + safezoneX;
			y = -2.44685 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_4: cw_afm_button
		{
			idc = 1603;
			x = -0.611458 * safezoneW + safezoneX;
			y = 0.983811 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_afm_edit_line0_1: cw_afm_edit
		{
			idc = 1400;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.302077 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line0_2: cw_afm_edit
		{
			idc = 1402;
			x = 0.15625 * safezoneW + safezoneX;
			y = 0.302077 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line1: cw_afm_edit
		{
			idc = 1401;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.339064 * safezoneH + safezoneY;
			w = 0.217708 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line2: cw_afm_edit
		{
			idc = 1403;
			x = 0.104688 * safezoneW + safezoneX;
			y = 0.383047 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line3: cw_afm_edit
		{
			idc = 1404;
			x = 0.0703125 * safezoneW + safezoneX;
			y = 0.605961 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line4: cw_afm_edit
		{
			idc = 1405;
			x = 0.116146 * safezoneW + safezoneX;
			y = 0.635948 * safezoneH + safezoneY;
			w = 0.131771 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line5: cw_afm_edit
		{
			idc = 1406;
			x = 0.0989583 * safezoneW + safezoneX;
			y = 0.65794 * safezoneH + safezoneY;
			w = 0.1375 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line6: cw_afm_edit
		{
			idc = 1407;
			x = 0.0817708 * safezoneW + safezoneX;
			y = 0.678931 * safezoneH + safezoneY;
			w = 0.200521 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line7: cw_afm_edit
		{
			idc = 1408;
			x = 0.0760417 * safezoneW + safezoneX;
			y = 0.701923 * safezoneH + safezoneY;
			w = 0.160417 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line8: cw_afm_edit
		{
			idc = 1409;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.752901 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line9: cw_afm_edit
		{
			idc = 1410;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.80788 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line10: cw_afm_edit
		{
			idc = 1411;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.846867 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_edit_line11: cw_afm_edit
		{
			idc = 1412;
			x = 0.0932292 * safezoneW + safezoneX;
			y = 0.945828 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_afm_ringle_1: cw_afm_picture
		{
			idc = 1201;
			text = "";
			x = 0.167708 * safezoneW + safezoneX;
			y = 0.408039 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_afm_ringle_2: cw_afm_picture
		{
			idc = 1202;
			text = "";
			x = 0.225 * safezoneW + safezoneX;
			y = 0.408039 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class vcw_afm_ringle_3: cw_afm_picture
		{
			idc = 1203;
			text = "";
			x = 0.254375 * safezoneW + safezoneX;
			y = 0.408039 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_afm_ringle_4: cw_afm_picture
		{
			idc = 1204;
			text = "";
			x = 0.190625 * safezoneW + safezoneX;
			y = 0.42303 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class cw_afm_ringle_5: cw_afm_picture
		{
			idc = 1205;
			text = "";
			x = 0.179167 * safezoneW + safezoneX;
			y = 0.450017 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_afm_ringle_6: cw_afm_picture
		{
			idc = 1206;
			text = "";
			x = 0.253646 * safezoneW + safezoneX;
			y = 0.450017 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_afm_ringle_7: cw_afm_picture
		{
			idc = 1207;
			text = "";
			x = 0.0588542 * safezoneW + safezoneX;
			y = 0.467013 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_afm_ringle_8: cw_afm_picture
		{
			idc = 1208;
			text = "";
			x = 0.127604 * safezoneW + safezoneX;
			y = 0.464013 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class cw_afm_bttn_ringle_1: cw_afm_button
		{
			idc = 1604;
			x = 0.167708 * safezoneW + safezoneX;
			y = 0.42303 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1201] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_2: cw_afm_button
		{
			idc = 1605;
			x = 0.230729 * safezoneW + safezoneX;
			y = 0.42303 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1202] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_3: cw_afm_button
		{
			idc = 1606;
			x = 0.259375 * safezoneW + safezoneX;
			y = 0.42303 * safezoneH + safezoneY;
			w = 0.0171875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1203] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_3_2: cw_afm_button
		{
			idc = 1607;
			x = 0.161979 * safezoneW + safezoneX;
			y = 0.445021 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1203] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_4: cw_afm_button
		{
			idc = 1608;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.445021 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1204] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_5: cw_afm_button
		{
			idc = 1609;
			x = 0.184896 * safezoneW + safezoneX;
			y = 0.467013 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1205] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_6: cw_afm_button
		{
			idc = 1610;
			x = 0.259375 * safezoneW + safezoneX;
			y = 0.467013 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1206] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_6_2: cw_afm_button
		{
			idc = 1611;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1206] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_7: cw_afm_button
		{
			idc = 1612;
			x = 0.0588542 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1207] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_8: cw_afm_button
		{
			idc = 1613;
			x = 0.133333 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1208] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_previousPage: cw_afm_button
		{
			idc = 1614;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_afm_fnc_previousPage;";
		};
		class cw_afm_bttn_nextPage: cw_afm_button
		{
			idc = 1615;
			x = 0.253646 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_afm_fnc_nextPage;";
		};
		class cw_afm_bttn_clearThis: cw_afm_button
		{
			idc = 1616;
			x = 0.0588542 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_afm_fnc_clearPage;";
		};
		class cw_afm_bttn_save: cw_afm_button
		{
			idc = 1617;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_afm_fnc_savePage;";
		};
		class cw_afm_bttn_clearAll: cw_afm_button
		{
			idc = 1618;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_afm_fnc_clearall;";
		};
	};
};

/*
class RscTitles
{
	titles[]={"CW_ADJUST_FIRE_MISSION_RESOURCE"};
	
	class CW_ADJUST_FIRE_MISSION_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_afm_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_ADJUST_FIRE_MISSION_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_afm_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";

		class Controls
		{
			class cw_adjustfiremission_background: cw_afm_picture
			{
				idc = 1200;
				text = "CW_AdjustFireMission\Images\adjustfiremission.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class cw_afm_edit_line0_1: cw_afm_edit
			{
				idc = 1400;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line0_2: cw_afm_edit
			{
				idc = 1402;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line1: cw_afm_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.335064 * safezoneH + safezoneY;
				w = 0.217708 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line2: cw_afm_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line3: cw_afm_edit
			{
				idc = 1404;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.598961 * safezoneH + safezoneY;
				w = 0.0973958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line4: cw_afm_edit
			{
				idc = 1405;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.631948 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line5: cw_afm_edit
			{
				idc = 1406;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line6: cw_afm_edit
			{
				idc = 1407;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.675931 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line7: cw_afm_edit
			{
				idc = 1408;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line8: cw_afm_edit
			{
				idc = 1409;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.752901 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line9: cw_afm_edit
			{
				idc = 1410;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.80788 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line10: cw_afm_edit
			{
				idc = 1411;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.840867 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line11: cw_afm_edit
			{
				idc = 1412;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.939828 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_ringle_1: cw_afm_picture
			{
				idc = 1201;
				text = "";
				x = 0.167708 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_2: cw_afm_picture
			{
				idc = 1202;
				text = "";
				x = 0.225 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class vcw_afm_ringle_3: cw_afm_picture
			{
				idc = 1203;
				text = "";
				x = 0.259375 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_4: cw_afm_picture
			{
				idc = 1204;
				text = "";
				x = 0.190625 * safezoneW + safezoneX;
				y = 0.42303 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_afm_ringle_5: cw_afm_picture
			{
				idc = 1205;
				text = "";
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_6: cw_afm_picture
			{
				idc = 1206;
				text = "";
				x = 0.253646 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_7: cw_afm_picture
			{
				idc = 1207;
				text = "";
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_8: cw_afm_picture
			{
				idc = 1208;
				text = "";
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
		};
	};
};*/


