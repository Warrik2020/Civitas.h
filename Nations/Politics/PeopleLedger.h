#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeopleLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeopleLedger") {}
    public:
        int64_t PairKey(int owner, int origin) const { void* __callArgs[] = { &owner, &origin }; return CallStaticValue<int64_t>("PairKey", __callArgs, 2); }
        int OwnerOf(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("OwnerOf", __callArgs, 1); }
        int OriginOf(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("OriginOf", __callArgs, 1); }
        bool TryGet(int owner, int origin, void* e) const { void* __callArgs[] = { &owner, &origin, &e }; return CallValue<bool>("TryGet", __callArgs, 3); }
        void* GetOrCreate(int owner, int origin, int standing, float acceptance, int tick) const { void* __callArgs[] = { &owner, &origin, &standing, &acceptance, &tick }; return Call("GetOrCreate", __callArgs, 5); }
        int StandingOf(int owner, int origin, int axis, void* it) const { void* __callArgs[] = { &owner, &origin, &axis, it }; return CallValue<int>("StandingOf", __callArgs, 4); }
        int TreatmentOf(int owner, int origin, int axis, void* it) const { void* __callArgs[] = { &owner, &origin, &axis, it }; return CallValue<int>("TreatmentOf", __callArgs, 4); }
        int ZoneTreatmentOf(int owner, int origin, int axis) const { void* __callArgs[] = { &owner, &origin, &axis }; return CallValue<int>("ZoneTreatmentOf", __callArgs, 3); }
        int EffectiveTreatmentOf(int owner, int origin, int axis, bool inZone, void* it) const { void* __callArgs[] = { &owner, &origin, &axis, &inZone, it }; return CallValue<int>("EffectiveTreatmentOf", __callArgs, 5); }
        int BlendedStandingOf(int owner, int origin, void* it) const { void* __callArgs[] = { &owner, &origin, it }; return CallValue<int>("BlendedStandingOf", __callArgs, 3); }
        float TaxMulOf(int owner, int origin, void* it) const { void* __callArgs[] = { &owner, &origin, it }; return CallValue<float>("TaxMulOf", __callArgs, 3); }
        float AcceptanceOf(int owner, int origin, void* it) const { void* __callArgs[] = { &owner, &origin, it }; return CallValue<float>("AcceptanceOf", __callArgs, 3); }
        void NudgeAcceptance(int owner, int origin, float delta) const { void* __callArgs[] = { &owner, &origin, &delta }; Call("NudgeAcceptance", __callArgs, 3); }
        void Export_(void* write) const { void* __callArgs[] = { write }; Call("Export", __callArgs, 1); }
        void Restore(int owner, int origin, int standing, float acceptance, int standingSetTick, int petitionStage, int petitionTick, int nextPetitionTick, float lastShare, int lastShareTick, void* standingAxes = nullptr, bool petitionDemand = false, void* realmRungs = nullptr, void* zoneRungs = nullptr, void* harshUntil = nullptr, int petitionAxis = -1, bool petitionOnZone = false, void* acceptRestUntil = nullptr) const { void* __callArgs[] = { &owner, &origin, &standing, &acceptance, &standingSetTick, &petitionStage, &petitionTick, &nextPetitionTick, &lastShare, &lastShareTick, standingAxes, &petitionDemand, realmRungs, zoneRungs, harshUntil, &petitionAxis, &petitionOnZone, acceptRestUntil }; Call("Restore", __callArgs, 18); }
        void Clear() const { Call("Clear", nullptr, 0); }
    };
}
