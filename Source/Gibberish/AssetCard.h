// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AssetCard.generated.h"

/**
 * 
 */

USTRUCT()
struct FCardAssetInfo {
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	UTexture2D* AssetThumbnail;

	UPROPERTY(EditAnywhere)
	float PointsValue;

};

UCLASS()
class GIBBERISH_API UAssetCard : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FCardAssetInfo> AssetItems;
	
};
