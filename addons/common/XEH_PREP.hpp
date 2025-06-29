TRACE_1("",QUOTE(ADDON));

PREP(cbaSettings);
PREP(cbaSettings_convertHelper);
PREP(cbaSettings_loadFromConfig);
PREP(cbaSettings_settingChanged);
PREP(cbaSettings_transferUserSettings);
PREP(readSettingsFromParamsArray);

PREP(actionKeysNamesConverted);
PREP(addCanInteractWithCondition);
PREP(addLineToDebugDraw);
PREP(addSwayFactor);
PREP(addToInventory);
PREP(addWeapon);
PREP(adjustMagazineAmmo);
PREP(assignedItemFix);
PREP(assignObjectsInList);
PREP(ambientBrightness);
PREP(arithmeticGetResult);
PREP(arithmeticSetSource);
PREP(ASLToPosition);
PREP(binarizeNumber);
PREP(blurScreen);
PREP(cachedCall);
PREP(canDig);
PREP(canGetInPosition);
PREP(canInteractWith);
PREP(changeProjectileDirection);
PREP(checkFiles);
PREP(checkFiles_diagnoseACE);
PREP(checkPBOs);
PREP(checkVersionNumber);
PREP(claim);
PREP(claimSafeServer);
PREP(codeToString);
PREP(createOrthonormalReference);
PREP(currentChannel);
PREP(debug);
PREP(debugModule);
PREP(defineVariable);
PREP(deviceKeyFindValidIndex);
PREP(deviceKeyRegisterNew);
PREP(deprecateComponent);
PREP(disableAI);
PREP(disableAiUAV);
PREP(disableUserInput);
PREP(displayIcon);
PREP(displayText);
PREP(displayTextPicture);
PREP(displayTextStructured);
PREP(doAnimation);
PREP(doGesture);
PREP(dummy);
PREP(dropBackpack);
PREP(endRadioTransmission);
PREP(eraseCache);
PREP(errorMessage);
PREP(escapeRegex);
PREP(findUnloadPosition);
PREP(firedEH);
PREP(fixCollision);
PREP(fixFloating);
PREP(fixLoweredRifleAnimation);
PREP(fixPosition);
PREP(getAddon);
PREP(getAllDefinedSetVariables);
PREP(getAwakeAnim);
PREP(getConfigName);
PREP(getCountOfItem);
PREP(getDeathAnim);
PREP(getDefaultAnim);
PREP(getDefinedVariable);
PREP(getDefinedVariableDefault);
PREP(getDefinedVariableInfo);
PREP(getFiremodeIndex);
PREP(getFirstObjectIntersection);
PREP(getFirstTerrainIntersection);
PREP(getGunner);
PREP(getInPosition);
PREP(getLocalUnits);
PREP(getMagneticBearing);
PREP(getMagneticBearingOffset);
PREP(getMapData);
PREP(getMapGridData);
PREP(getMapGridFromPos);
PREP(getMapPosFromGrid);
PREP(getMarkerType);
PREP(getMGRSdata);
PREP(getName);
PREP(getNumberMagazinesIn);
PREP(getPitchBankYaw);
PREP(getPylonTurret);
PREP(getSettingData);
PREP(getStaminaBarControl);
PREP(getTargetAzimuthAndInclination);
PREP(getTargetDistance);
PREP(getTargetObject);
PREP(getTurnedOnLights);
PREP(getTurretDirection);
PREP(getUavControlPosition);
PREP(getVehicleCargo);
PREP(getVehicleCodriver);
PREP(getVehicleIcon);
PREP(getVersion);
PREP(getWeaponAzimuthAndInclination);
PREP(getWeaponIndex);
PREP(getWeaponState);
PREP(getWeight);
PREP(getWheelHitPointsWithSelections);
PREP(getWindDirection);
PREP(getZoom);
PREP(goKneeling);
PREP(hadamardProduct);
PREP(handleEngine);
PREP(handleModifierKey);
PREP(handleModifierKeyUp);
PREP(hasItem);
PREP(hasMagazine);
PREP(hasZeusAccess);
PREP(headBugFix);
PREP(hideUnit);
PREP(interpolateFromArray);
PREP(inTransitionAnim);
PREP(isAwake);
PREP(isBeingCarried);
PREP(isBeingDragged);
PREP(isEngineer);
PREP(isEOD);
PREP(isInBuilding);
PREP(isMedic);
PREP(isModLoaded);
PREP(isPlayer);
PREP(isSwimming);
PREP(lightIntensityFromObject);
PREP(loadPerson);
PREP(loadPersonLocal);
PREP(moduleCheckPBOs);
PREP(moduleLSDVehicles);
PREP(muteUnit);
PREP(muteUnitHandleInitPost);
PREP(muteUnitHandleRespawn);
PREP(nearestVehiclesFreeSeat);
PREP(numberToDigits);
PREP(numberToString);
PREP(onAnswerRequest);
PREP(owned);
PREP(parseList);
PREP(playConfigSound3D);
PREP(player);
PREP(playerSide);
PREP(positionToASL);
PREP(progressBar);
PREP(readSettingFromModule);
PREP(receiveRequest);
PREP(registerItemReplacement);
PREP(removeCanInteractWithCondition);
PREP(removeSpecificMagazine);
PREP(replaceRegisteredItems);
PREP(requestCallback);
PREP(resetAllDefaults);
PREP(restoreVariablesJIP);
PREP(rscObjectHelper);
PREP(runAfterSettingsInit);
PREP(runTests);
PREP(sanitizeString);
PREP(sendRequest);
PREP(serverLog);
PREP(setAimCoef);
PREP(setApproximateVariablePublic);
PREP(setDead);
PREP(setDefinedVariable);
PREP(setDisableUserInputStatus);
PREP(setHearingCapability);
PREP(setName);
PREP(setParameter);
PREP(setPitchBankYaw);
PREP(setPlayerOwner);
PREP(setProne);
PREP(setSetting);
PREP(setupLocalUnitsHandler);
PREP(setVariableJIP);
PREP(setVariablePublic);
PREP(setVolume);
PREP(setWeaponLightLaserState);
PREP(showHud);
PREP(statusEffect_addType);
PREP(statusEffect_get);
PREP(statusEffect_localEH);
PREP(statusEffect_resetVariables);
PREP(statusEffect_respawnEH);
PREP(statusEffect_sendEffects);
PREP(statusEffect_set);
PREP(stopGesture);
PREP(stringCompare);
PREP(stringToColoredText);
PREP(swayLoop);
PREP(switchAttachmentMode);
PREP(switchPersistentLaser);
PREP(switchToGroupSide);
PREP(throttledPublicVariable);
PREP(toBin);
PREP(toBitmask);
PREP(toHex);
PREP(toNumber);
PREP(throwWeapon);
PREP(unhideUnit);
PREP(uniqueElements);
PREP(uniqueItems);
PREP(uniqueUnitItems);
PREP(unloadPerson);
PREP(unloadPersonLocal);
PREP(unloadUnitWeapon);
PREP(unmuteUnit);
PREP(updatePlayerVehAttenuation);
PREP(useItem);
PREP(useMagazine);
PREP(watchVariable);
PREP(waveHeightAt);

PREP(translateToWeaponSpace);
PREP(translateToModelSpace);

// Model and drawing helpers
PREP(worldToScreenBounds);

// config items
PREP(getItemType);
PREP(getWeaponType);
PREP(getWeaponModes);
PREP(getWeaponMuzzles);

// config objects
PREP(getConfigGunner);
PREP(getConfigCommander);
PREP(getSelectionsWithoutHitPoints);
PREP(getReflectorsWithSelections);
PREP(getLightProperties);
PREP(getLightPropertiesWeapon);
PREP(getVehicleCrew);
PREP(getVehicleUAVCrew);

// turrets
PREP(getTurretIndex);
PREP(getTurretConfigPath);
PREP(getTurretGunner);
PREP(getTurretCommander);
PREP(getTurretCopilot);
PREP(getDoorTurrets);
PREP(getTurretsFFV);
PREP(getTurretsOther);
PREP(hasHatch);

// ACE_Debug
PREP(getChildren);
PREP(getDisplayConfigName);
PREP(monitor);
PREP(showUser);

PREP(dumpPerformanceCounters);
PREP(dumpArray);

// Synchronized Events
PREP(syncedEventPFH);
PREP(addSyncedEventHandler);
PREP(removeSyncedEventHandler);
PREP(requestSyncedEvent);
PREP(syncedEvent);

PREP(_handleSyncedEvent);
PREP(_handleRequestSyncedEvent);
PREP(_handleRequestAllSyncedEvents);

// other eventhandlers
PREP(addActionEventHandler);
PREP(addActionMenuEventHandler);
PREP(addExplosionEventHandler);
PREP(addMapMarkerCreatedEventHandler);
PREP(addPlayerEH);

PREP(removeActionEventHandler);
PREP(removeActionMenuEventHandler);
PREP(removeMapMarkerCreatedEventHandler);
