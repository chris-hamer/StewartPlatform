// Fill out your copyright notice in the Description page of Project Settings.

#include "StewartPlatformFunctionLibrary.h"


bool UStewartPlatformFunctionLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UStewartPlatformFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}


FRotator UStewartPlatformFunctionLibrary::QuatToRot(float w, float x, float y, float z)
{
	return FQuat(x, y, z, w).Rotator();
}