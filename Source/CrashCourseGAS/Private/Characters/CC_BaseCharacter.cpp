// Copyright Luis Ferreira


#include "CrashCourseGAS/Public/Characters/CC_BaseCharacter.h"

#include "AbilitySystemComponent.h"

ACC_BaseCharacter::ACC_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	// Tick and refresh bone transforms whether rendered or not - for bone updates on a dedicated server
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}

UAbilitySystemComponent* ACC_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

void ACC_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACC_BaseCharacter::GiveStartupAbilities()
{
	if (!IsValid(GetAbilitySystemComponent()))
	{
		UE_LOG(LogTemp, Error, TEXT("GetAbilitySystemComponent is invalid"));
	}
	
	for (const TSubclassOf<UGameplayAbility>& Ability : StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability);
		GetAbilitySystemComponent()->GiveAbility(AbilitySpec);
	}
}
