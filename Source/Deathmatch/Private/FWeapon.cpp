// Fill out your copyright notice in the Description page of Project Settings.


#include "FWeapon.h"

// Sets default values
AFWeapon::AFWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AFWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

