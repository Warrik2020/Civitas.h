#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class DiploRequests : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DiploRequests(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "DiploRequests") {}
    public:
        bool IsPeoples(int kind) const { void* args[] = { &kind }; return CallStaticValue<bool>("IsPeoples", args, 1); }
        bool MovesLand(int kind) const { void* args[] = { &kind }; return CallStaticValue<bool>("MovesLand", args, 1); }
        float Severity(int kind, void* f) const { void* args[] = { &kind, &f }; return CallStaticValue<float>("Severity", args, 2); }
        float Chance(int tone, float powerRatio, float opinionOfSender, float aggression, float bond, float leverage, float severity, void* cfg) const { void* args[] = { &tone, &powerRatio, &opinionOfSender, &aggression, &bond, &leverage, &severity, cfg }; return CallStaticValue<float>("Chance", args, 8); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        float AskBase() const { return ReadStaticField<float>("AskBase"); }
        float AskOpinionWeight() const { return ReadStaticField<float>("AskOpinionWeight"); }
        float AskDefianceScale() const { return ReadStaticField<float>("AskDefianceScale"); }
        float AllyBond() const { return ReadStaticField<float>("AllyBond"); }
        float VassalBond() const { return ReadStaticField<float>("VassalBond"); }
        float AskCooldownDays() const { return ReadStaticField<float>("AskCooldownDays"); }
        float DemandBase() const { return ReadStaticField<float>("DemandBase"); }
        float DemandFearScale() const { return ReadStaticField<float>("DemandFearScale"); }
        float DemandFearCap() const { return ReadStaticField<float>("DemandFearCap"); }
        float DemandOpinionWeight() const { return ReadStaticField<float>("DemandOpinionWeight"); }
        float DemandAcceptedOpinion() const { return ReadStaticField<float>("DemandAcceptedOpinion"); }
        float DemandRefusedOpinion() const { return ReadStaticField<float>("DemandRefusedOpinion"); }
        float DemandCooldownDays() const { return ReadStaticField<float>("DemandCooldownDays"); }
        float PeaceBase() const { return ReadStaticField<float>("PeaceBase"); }
        float PeaceWinning() const { return ReadStaticField<float>("PeaceWinning"); }
        float PeaceLosing() const { return ReadStaticField<float>("PeaceLosing"); }
        float FreedomBase() const { return ReadStaticField<float>("FreedomBase"); }
        float FreedomLand() const { return ReadStaticField<float>("FreedomLand"); }
        float KinLandWeight() const { return ReadStaticField<float>("KinLandWeight"); }
        float StrangerLandWeight() const { return ReadStaticField<float>("StrangerLandWeight"); }
        float PersecutionBase() const { return ReadStaticField<float>("PersecutionBase"); }
        float PersecutionShare() const { return ReadStaticField<float>("PersecutionShare"); }
        float PersecutionDoctrine() const { return ReadStaticField<float>("PersecutionDoctrine"); }
        float AssimilationBase() const { return ReadStaticField<float>("AssimilationBase"); }
        float AssimilationShare() const { return ReadStaticField<float>("AssimilationShare"); }
        float MaxLandShare() const { return ReadStaticField<float>("MaxLandShare"); }
        float PledgeYears() const { return ReadStaticField<float>("PledgeYears"); }
        float StateMajority() const { return ReadStaticField<float>("StateMajority"); }
        float AiUltimatumPeoplesChance() const { return ReadStaticField<float>("AiUltimatumPeoplesChance"); }
        float AiMinRequestChance() const { return ReadStaticField<float>("AiMinRequestChance"); }
        float AiDemandEdge() const { return ReadStaticField<float>("AiDemandEdge"); }
        float AiDemandAggression() const { return ReadStaticField<float>("AiDemandAggression"); }
        int AiMinLandTiles() const { return ReadStaticField<int>("AiMinLandTiles"); }
        float AiLandPowerRatio() const { return ReadStaticField<float>("AiLandPowerRatio"); }
        float AiMinPeopleShare() const { return ReadStaticField<float>("AiMinPeopleShare"); }
        int AiLandWalks() const { return ReadStaticField<int>("AiLandWalks"); }
        int AiRequestTries() const { return ReadStaticField<int>("AiRequestTries"); }
        float AnswerDays() const { return ReadStaticField<float>("AnswerDays"); }
        int MaxPendingCards() const { return ReadStaticField<int>("MaxPendingCards"); }
    };
}
