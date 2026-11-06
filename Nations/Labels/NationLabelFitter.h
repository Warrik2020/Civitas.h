#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabelFitter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabelFitter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabelFitter") {}
    public:
        int Compute(void* grid, int nationId, int minX, int minY, int maxX, int maxY, int maxSlices, float bridgeGapPx, float minAreaFraction, void* results, float nameAspect = 6.0f, int minAreaTiles = 0, int homeTile = -1) const { void* __callArgs[] = { grid, &nationId, &minX, &minY, &maxX, &maxY, &maxSlices, &bridgeGapPx, &minAreaFraction, results, &nameAspect, &minAreaTiles, &homeTile }; return CallStaticValue<int>("Compute", __callArgs, 13); }
        int Compute(void* mask, int minX, int minY, int maxX, int maxY, int maxSlices, float bridgeGapPx, float minAreaFraction, void* results, float nameAspect = 6.0f, int minAreaTiles = 0, int homeTile = -1) const { void* __callArgs[] = { mask, &minX, &minY, &maxX, &maxY, &maxSlices, &bridgeGapPx, &minAreaFraction, results, &nameAspect, &minAreaTiles, &homeTile }; return CallStaticValue<int>("Compute", __callArgs, 12); }
        int MinAreaTiles(int mapWidth, int mapHeight, float mapShare) const { void* __callArgs[] = { &mapWidth, &mapHeight, &mapShare }; return CallStaticValue<int>("MinAreaTiles", __callArgs, 3); }
        float AspectOf(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<float>("AspectOf", __callArgs, 1); }
        uint8_t KindOther() const { return ReadStaticField<uint8_t>("KindOther"); }
        uint8_t KindNeutral() const { return ReadStaticField<uint8_t>("KindNeutral"); }
        uint8_t KindOurs() const { return ReadStaticField<uint8_t>("KindOurs"); }
        float DefaultAspect() const { return ReadStaticField<float>("DefaultAspect"); }
    };
}
