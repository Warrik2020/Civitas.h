#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class WorldScale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldScale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "WorldScale") {}
    public:
        bool IsUntested(int64_t tiles) const { void* __callArgs[] = { &tiles }; return CallStaticValue<bool>("IsUntested", __callArgs, 1); }
        float SuggestedFor(const char* mapPath, int gridW, int gridH) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(mapPath ? mapPath : "") : nullptr; void* __callArgs[] = { managed_0, &gridW, &gridH }; return CallStaticValue<float>("SuggestedFor", __callArgs, 3); }
        int EstimateGb(int64_t tiles) const { void* __callArgs[] = { &tiles }; return CallStaticValue<int>("EstimateGb", __callArgs, 1); }
        void NoteBuilt(float scale) const { void* __callArgs[] = { &scale }; CallStatic("NoteBuilt", __callArgs, 1); }
        float Resolve(float sceneScale) const { void* __callArgs[] = { &sceneScale }; return CallStaticValue<float>("Resolve", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        float Snap(float scale) const { void* __callArgs[] = { &scale }; return CallStaticValue<float>("Snap", __callArgs, 1); }
        void GridAt(int srcW, int srcH, int downsample, float scale, int& w, int& h) const { void* __callArgs[] = { &srcW, &srcH, &downsample, &scale, &w, &h }; CallStatic("GridAt", __callArgs, 6); }
        int64_t TilesAt(int srcW, int srcH, int downsample, float scale) const { void* __callArgs[] = { &srcW, &srcH, &downsample, &scale }; return CallStaticValue<int64_t>("TilesAt", __callArgs, 4); }
        float MaxFor(int srcW, int srcH, int downsample, float floor = 1.0f) const { void* __callArgs[] = { &srcW, &srcH, &downsample, &floor }; return CallStaticValue<float>("MaxFor", __callArgs, 4); }
        void* Label(float scale) const { void* __callArgs[] = { &scale }; return CallStatic("Label", __callArgs, 1); }
        void* Count(int64_t n) const { void* __callArgs[] = { &n }; return CallStatic("Count", __callArgs, 1); }
        void* Describe(int srcW, int srcH, int downsample, float baseScale, float scale, float landShare, float maxScale) const { void* __callArgs[] = { &srcW, &srcH, &downsample, &baseScale, &scale, &landShare, &maxScale }; return CallStatic("Describe", __callArgs, 7); }
        float Min_() const { return ReadStaticField<float>("Min"); }
        float Step() const { return ReadStaticField<float>("Step"); }
        float Cap() const { return ReadStaticField<float>("Cap"); }
        int64_t TileBudget() const { return ReadStaticField<int64_t>("TileBudget"); }
        int64_t TestedTiles() const { return ReadStaticField<int64_t>("TestedTiles"); }
        float WorldMapSuggested() const { return ReadStaticField<float>("WorldMapSuggested"); }
        float Pending() const { return ReadStaticField<float>("Pending"); }
        void Pending(float value) const { WriteStaticField<float>("Pending", value); }
        float MenuChoice() const { return ReadStaticField<float>("MenuChoice"); }
        void MenuChoice(float value) const { WriteStaticField<float>("MenuChoice", value); }
    };
}
