/*
		 - Disposable Launcher Script
		Modified from INKO Disposable.
		
		Input = Array from Fired Event Handler
		
		_unit = player vehicle which fired the weapon
		_weapon = weapon which was fired by the player
		_handled = return value to say script was executed.
*/
_unit = _this select 0;
_currentWeapon = _this select 1;

_switchWeapon = getText (configfile >> 'CfgWeapons' >> _currentWeapon >> 'ASOR_Launcher_Alternate');
_addMagazine = getText (configfile >> 'CfgWeapons' >> _currentWeapon >> 'ASOR_Launcher_Magazine');

if (_addMagazine != "") then { _unit addMagazine _addMagazine; };
_unit addWeapon _switchWeapon;
_unit selectWeapon _switchWeapon;