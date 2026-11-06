#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class CounterShatter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CounterShatter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "CounterShatter") {}
    public:
        void AddHairlineCracks(void* v, void* c, void* t, void* ctr, float halfW, float halfH, int divisionId, float hairT, float crackHalfWidthWorld, void* crackCol) const { void* args[] = { v, c, t, ctr, &halfW, &halfH, &divisionId, &hairT, &crackHalfWidthWorld, crackCol }; CallStatic("AddHairlineCracks", args, 10); }
        void AddShards(void* v, void* c, void* t, void* ctr, float halfW, float halfH, int divisionId, float sepT, float chunkT, float chunkMaxMissingFraction, float chunkBiteDepth, float maxGapFraction, float maxRotRadians, float borderFraction, int debrisPerChunk, float debrisSizeFraction, float debrisDriftFraction, void* rimCol, void* fillCol) const { void* args[] = { v, c, t, ctr, &halfW, &halfH, &divisionId, &sepT, &chunkT, &chunkMaxMissingFraction, &chunkBiteDepth, &maxGapFraction, &maxRotRadians, &borderFraction, &debrisPerChunk, &debrisSizeFraction, &debrisDriftFraction, rimCol, fillCol }; CallStatic("AddShards", args, 19); }
        void AddIconShards(void* v, void* c, void* uvs, void* t, void* ctr, float halfW, float halfH, int divisionId, float sepT, float chunkT, float chunkMaxMissingFraction, float chunkBiteDepth, float maxGapFraction, float maxRotRadians, void* uvRect, void* col) const { void* args[] = { v, c, uvs, t, ctr, &halfW, &halfH, &divisionId, &sepT, &chunkT, &chunkMaxMissingFraction, &chunkBiteDepth, &maxGapFraction, &maxRotRadians, uvRect, col }; CallStatic("AddIconShards", args, 16); }
        void* outer() const { return ReadField<void*>("outer"); }
        void SetOuter(void* value) const { WriteField<void*>("outer", value); }
        void* centroid() const { return ReadField<void*>("centroid"); }
        void SetCentroid(void* value) const { WriteField<void*>("centroid", value); }
        void* outDir() const { return ReadField<void*>("outDir"); }
        void SetOutDir(void* value) const { WriteField<void*>("outDir", value); }
        float avgR() const { return ReadField<float>("avgR"); }
        void SetAvgR(float value) const { WriteField<float>("avgR", value); }
    };
}
