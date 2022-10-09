// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Sling(): SlingShot is NULL, make sure it's initialized."));
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hola me llamo Otto soy estudiante de la carrera de Ingenieria de Sistemas estoy cursando aunque con muchas fallas por mi parte aqui sigo dandole con todo, me gusta Breaking Bad la bando los redhotchilli peppers y esto es todo"));
	}
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

