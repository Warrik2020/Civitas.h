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
        float Fervor(float wound, int ageTicks, float ticksPerYear) const { void* __callArgs[] = { &wound, &ageTicks, &ticksPerYear }; return CallStaticValue<float>("Fervor", __callArgs, 3); }
        float Fervor(void* m, int nowWorldTick, float ticksPerYear) const { void* __callArgs[] = { m, &nowWorldTick, &ticksPerYear }; return CallStaticValue<float>("Fervor", __callArgs, 3); }
        float Loss(int before, int after) const { void* __callArgs[] = { &before, &after }; return CallStaticValue<float>("Loss", __callArgs, 2); }
        bool TreatyIsFall(float loss, int shards) const { void* __callArgs[] = { &loss, &shards }; return CallStaticValue<bool>("TreatyIsFall", __callArgs, 2); }
        float Wound(int cause, float loss, int shards) const { void* __callArgs[] = { &cause, &loss, &shards }; return CallStaticValue<float>("Wound", __callArgs, 3); }
        float MergeWound(float fervorNow, float newWound) const { void* __callArgs[] = { &fervorNow, &newWound }; return CallStaticValue<float>("MergeWound", __callArgs, 2); }
        float PeakWeight(int ageTicks, float ticksPerYear) const { void* __callArgs[] = { &ageTicks, &ticksPerYear }; return CallStaticValue<float>("PeakWeight", __callArgs, 2); }
        bool IsRestored(float heirShare, float fallShare) const { void* __callArgs[] = { &heirShare, &fallShare }; return CallStaticValue<bool>("IsRestored", __callArgs, 2); }
        int PickHeir(void* carriers, void* heldInRealm) const { void* __callArgs[] = { carriers, heldInRealm }; return CallStaticValue<int>("PickHeir", __callArgs, 2); }
        bool WithinRealm(int selfTiles, int partnerTiles, int peakTiles) const { void* __callArgs[] = { &selfTiles, &partnerTiles, &peakTiles }; return CallStaticValue<bool>("WithinRealm", __callArgs, 3); }
        void MergeAnchors(void* anchors, void* weights, void* addAnchors, void* addWeights) const { void* __callArgs[] = { anchors, weights, addAnchors, addWeights }; CallStatic("MergeAnchors", __callArgs, 4); }
        void AddAnchor(void* anchors, void* weights, int anchor, int weight) const { void* __callArgs[] = { anchors, weights, &anchor, &weight }; CallStatic("AddAnchor", __callArgs, 4); }
        int TotalWeight(void* weights) const { void* __callArgs[] = { weights }; return CallStaticValue<int>("TotalWeight", __callArgs, 1); }
    };
}
