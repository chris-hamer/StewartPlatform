// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StewartPlatformFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class STEWARTPLATFORM_API UStewartPlatformFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "save", meta = (MultiLine = true))
	static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "save", meta = (MultiLine = true))
	static bool FileLoadString(FString FileNameA, FString& SaveTextA);

	UFUNCTION(BlueprintPure, Category = "save", meta = (MultiLine = true))
	static FRotator QuatToRot(float w, float x, float y, float z);
	
	
};
