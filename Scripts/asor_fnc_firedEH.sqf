/*
		 - Disposable Launcher Script
		Modified from INKO Disposable.
		
		Input = Array from Fired Event Handler
		
		_unit = player vehicle which fired the weapon
		_weapon = weapon which was fired by the player
		_handled = return value to say script was executed.
*/
private ["_unit", "_weapon", "_vehicle", "_tubeModel", "_projectile", "_handled"];

//diag_log str(_this);

_unit = _this select 0;
_weapon = _this select 1;
_projectile = _this select 6;

diag_log _projectile;

_projectileEH = _unit addEventHandler ["Killed", "diag_log _this]"];

diag_log _projectileEH;

_switchWeapon = getText (configfile >> 'CfgWeapons' >> _weapon >> 'ASOR_Launcher_Fired');
_handled = false;

if (_unit == player) then
{
	if (_weapon == currentWeapon player) then
	{
		_change_weapon = [_unit, _switchWeapon] spawn 
		{
			_vehicle = _this select 0;
			_tubeModel = _this select 1;
			waitUntil {
				sleep 0.1; 
				true;
			};
			_vehicle addWeapon _tubeModel;
			_vehicle selectWeapon _tubeModel;
		
			_throw_weapon = [_vehicle, _tubeModel] spawn 
			{
				_vehicle = _this select 0;
				_switchWeapon = _this select 1;
				while {true} do 
				{
					waitUntil {
								sleep 0.1; 
								((currentWeapon _vehicle) != _switchWeapon);
					};
					_unitDirection = getDir _vehicle;
					_unitVelocity = velocity _vehicle;

					_selectionPosition = _vehicle selectionPosition "RightShoulder";
					_worldPosition = _vehicle modelToWorld _selectionPosition;
					
					_vehicle removeWeapon _switchWeapon;

					_tube = createVehicle ["weaponholdersimulated", _worldPosition, [], 0, "can_Collide"];
					_tube addWeaponCargoGlobal [_switchWeapon, 1];
					
					playSound3D ["", _tube, false, (position _tube), 0.85,1,100];
					
					_tube setPos [(_worldPosition select 0) + ((cos _unitDirection) / 3), (_worldPosition select 1) - ((sin _unitDirection) / 3), _worldPosition select 2];
					_tube setDir ((_unitDirection) - 90);
					_tube setVelocity  [(_unitVelocity select 0) + (cos _unitDirection), (_unitVelocity select 1) - (sin _unitDirection), _unitVelocity select 2];
					if (true) exitWith {};
				};
			};
		};		
	};
};
_handled;
