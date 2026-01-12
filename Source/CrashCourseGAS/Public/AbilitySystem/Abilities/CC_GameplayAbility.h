// Copyright Luis Ferreira

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "CC_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class CRASHCOURSEGAS_API UCC_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Crash|Debug")
	bool bDrawDebugs = false;
	
};
