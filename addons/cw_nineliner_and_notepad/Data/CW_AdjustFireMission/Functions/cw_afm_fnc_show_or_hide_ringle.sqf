cw_afm_fnc_show_or_hide_ringle =
{
_idc = _this select 0;

If (ctrlText _idc == "") exitWith {ctrlSetText [_idc, "\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\ringle.paa"];};
If (ctrlText _idc == "\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\ringle.paa") exitWith {ctrlSetText [_idc, ""];};


};