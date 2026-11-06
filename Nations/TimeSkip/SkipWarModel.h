#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipWarModel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipWarModel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipWarModel") {}
    public:
        float Drift(float strengthA, float strengthB, float clamp, bool overseas, float noise01) const { void* __callArgs[] = { &strengthA, &strengthB, &clamp, &overseas, &noise01 }; return CallStaticValue<float>("Drift", __callArgs, 5); }
        bool Broken(float scoreForSide, float clamp, float strengthSide, float strengthOther) const { void* __callArgs[] = { &scoreForSide, &clamp, &strengthSide, &strengthOther }; return CallStaticValue<bool>("Broken", __callArgs, 4); }
        void Losses(float menA, float menB, float strengthA, float strengthB, float& lostA, float& lostB) const { void* __callArgs[] = { &menA, &menB, &strengthA, &strengthB, &lostA, &lostB }; CallStatic("Losses", __callArgs, 6); }
        float Edge(float strengthA, float strengthB) const { void* __callArgs[] = { &strengthA, &strengthB }; return CallStaticValue<float>("Edge", __callArgs, 2); }
        float AdvanceDepth(float edge, float push, float monthMarchTiles) const { void* __callArgs[] = { &edge, &push, &monthMarchTiles }; return CallStaticValue<float>("AdvanceDepth", __callArgs, 3); }
        float WedgeHalfWidth(float sectorTiles, int divisions) const { void* __callArgs[] = { &sectorTiles, &divisions }; return CallStaticValue<float>("WedgeHalfWidth", __callArgs, 2); }
        float ReserveWeight(float enemyStrength, bool border) const { void* __callArgs[] = { &enemyStrength, &border }; return CallStaticValue<float>("ReserveWeight", __callArgs, 2); }
        float TargetScore(float population, bool capital, bool liberates, float distance, float pad) const { void* __callArgs[] = { &population, &capital, &liberates, &distance, &pad }; return CallStaticValue<float>("TargetScore", __callArgs, 5); }
    };
}
