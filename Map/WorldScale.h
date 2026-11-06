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
        bool IsUntested(int64_t tiles) const { void* args[] = { &tiles }; return CallStaticValue<bool>("IsUntested", args, 1); }
        float SuggestedFor(const char* mapPath, int gridW, int gridH) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(mapPath ? mapPath : "") : nullptr; void* args[] = { managed_0, &gridW, &gridH }; return CallStaticValue<float>("SuggestedFor", args, 3); }
        int EstimateGb(int64_t tiles) const { void* args[] = { &tiles }; return CallStaticValue<int>("EstimateGb", args, 1); }
        void NoteBuilt(float scale) const { void* args[] = { &scale }; CallStatic("NoteBuilt", args, 1); }
        float Resolve(float sceneScale) const { void* args[] = { &sceneScale }; return CallStaticValue<float>("Resolve", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        float Snap(float scale) const { void* args[] = { &scale }; return CallStaticValue<float>("Snap", args, 1); }
        void GridAt(int srcW, int srcH, int downsample, float scale, int& w, int& h) const { void* args[] = { &srcW, &srcH, &downsample, &scale, &w, &h }; CallStatic("GridAt", args, 6); }
        int64_t TilesAt(int srcW, int srcH, int downsample, float scale) const { void* args[] = { &srcW, &srcH, &downsample, &scale }; return CallStaticValue<int64_t>("TilesAt", args, 4); }
        float MaxFor(int srcW, int srcH, int downsample, float floor = 1f) const { void* args[] = { &srcW, &srcH, &downsample, &floor }; return CallStaticValue<float>("MaxFor", args, 4); }
        void* Label(float scale) const { void* args[] = { &scale }; return CallStatic("Label", args, 1); }
        void* Count(int64_t n) const { void* args[] = { &n }; return CallStatic("Count", args, 1); }
        void* Describe(int srcW, int srcH, int downsample, float baseScale, float scale, float landShare, float maxScale) const { void* args[] = { &srcW, &srcH, &downsample, &baseScale, &scale, &landShare, &maxScale }; return CallStatic("Describe", args, 7); }
        float Min() const { return ReadStaticField<float>("Min"); }
        float Step() const { return ReadStaticField<float>("Step"); }
        float Cap() const { return ReadStaticField<float>("Cap"); }
        int64_t TileBudget() const { return ReadStaticField<int64_t>("TileBudget"); }
        int64_t TestedTiles() const { return ReadStaticField<int64_t>("TestedTiles"); }
        float WorldMapSuggested() const { return ReadStaticField<float>("WorldMapSuggested"); }
        float Pending() const { return ReadStaticField<float>("Pending"); }
        void SetPending(float value) const { WriteStaticField<float>("Pending", value); }
        float MenuChoice() const { return ReadStaticField<float>("MenuChoice"); }
        void SetMenuChoice(float value) const { WriteStaticField<float>("MenuChoice", value); }
    };
}
