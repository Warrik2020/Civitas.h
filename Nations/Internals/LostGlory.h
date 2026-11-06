#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LostGlory : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LostGlory(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LostGlory") {}
    public:
        float Fervor(float wound, int ageTicks, float ticksPerYear) const { void* args[] = { &wound, &ageTicks, &ticksPerYear }; return CallStaticValue<float>("Fervor", args, 3); }
        float Fervor(void* m, int nowWorldTick, float ticksPerYear) const { void* args[] = { m, &nowWorldTick, &ticksPerYear }; return CallStaticValue<float>("Fervor", args, 3); }
        float Loss(int before, int after) const { void* args[] = { &before, &after }; return CallStaticValue<float>("Loss", args, 2); }
        bool TreatyIsFall(float loss, int shards) const { void* args[] = { &loss, &shards }; return CallStaticValue<bool>("TreatyIsFall", args, 2); }
        float Wound(int cause, float loss, int shards) const { void* args[] = { &cause, &loss, &shards }; return CallStaticValue<float>("Wound", args, 3); }
        float MergeWound(float fervorNow, float newWound) const { void* args[] = { &fervorNow, &newWound }; return CallStaticValue<float>("MergeWound", args, 2); }
        float PeakWeight(int ageTicks, float ticksPerYear) const { void* args[] = { &ageTicks, &ticksPerYear }; return CallStaticValue<float>("PeakWeight", args, 2); }
        bool IsRestored(float heirShare, float fallShare) const { void* args[] = { &heirShare, &fallShare }; return CallStaticValue<bool>("IsRestored", args, 2); }
        int PickHeir(void* carriers, void* heldInRealm) const { void* args[] = { carriers, heldInRealm }; return CallStaticValue<int>("PickHeir", args, 2); }
        bool WithinRealm(int selfTiles, int partnerTiles, int peakTiles) const { void* args[] = { &selfTiles, &partnerTiles, &peakTiles }; return CallStaticValue<bool>("WithinRealm", args, 3); }
        void MergeAnchors(void* anchors, void* weights, void* addAnchors, void* addWeights) const { void* args[] = { anchors, weights, addAnchors, addWeights }; CallStatic("MergeAnchors", args, 4); }
        void AddAnchor(void* anchors, void* weights, int anchor, int weight) const { void* args[] = { anchors, weights, &anchor, &weight }; CallStatic("AddAnchor", args, 4); }
        int TotalWeight(void* weights) const { void* args[] = { weights }; return CallStaticValue<int>("TotalWeight", args, 1); }
    };
}
