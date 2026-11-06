#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class AiRelevanceCore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiRelevanceCore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "AiRelevanceCore") {}
    public:
        void Reset() const { Call("Reset", nullptr, 0); }
        void Compute(void* w, int now, void* tiers, void* muls) const { void* args[] = { w, &now, &tiers, &muls }; Call("Compute", args, 4); }
        int RegionalMul() const { return ReadField<int>("RegionalMul"); }
        void SetRegionalMul(int value) const { WriteField<int>("RegionalMul", value); }
        int DistantMul() const { return ReadField<int>("DistantMul"); }
        void SetDistantMul(int value) const { WriteField<int>("DistantMul", value); }
        int WarMulCap() const { return ReadField<int>("WarMulCap"); }
        void SetWarMulCap(int value) const { WriteField<int>("WarMulCap", value); }
        int RegionalPadTiles() const { return ReadField<int>("RegionalPadTiles"); }
        void SetRegionalPadTiles(int value) const { WriteField<int>("RegionalPadTiles", value); }
        int DemoteAfterTicks() const { return ReadField<int>("DemoteAfterTicks"); }
        void SetDemoteAfterTicks(int value) const { WriteField<int>("DemoteAfterTicks", value); }
        bool WarMatch() const { return ReadField<bool>("WarMatch"); }
        void SetWarMatch(bool value) const { WriteField<bool>("WarMatch", value); }
    };
}
