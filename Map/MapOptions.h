#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapOptions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapOptions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapOptions") {}
    public:
        int AutoDownsample(int srcW, int srcH) const { void* __callArgs[] = { &srcW, &srcH }; return CallStaticValue<int>("AutoDownsample", __callArgs, 2); }
        int ResolveDownsample(int srcW, int srcH) const { void* __callArgs[] = { &srcW, &srcH }; return CallValue<int>("ResolveDownsample", __callArgs, 2); }
        void Grid(int srcW, int srcH, int downsample, float scale, int& w, int& h, float& spanTiles) const { void* __callArgs[] = { &srcW, &srcH, &downsample, &scale, &w, &h, &spanTiles }; CallStatic("Grid", __callArgs, 7); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        int simDownsample() const { return ReadField<int>("simDownsample"); }
        void simDownsample(int value) const { WriteField<int>("simDownsample", value); }
        float simScale() const { return ReadField<float>("simScale"); }
        void simScale(float value) const { WriteField<float>("simScale", value); }
        int minIslandArea() const { return ReadField<int>("minIslandArea"); }
        void minIslandArea(int value) const { WriteField<int>("minIslandArea", value); }
        int minHoleArea() const { return ReadField<int>("minHoleArea"); }
        void minHoleArea(int value) const { WriteField<int>("minHoleArea", value); }
        int chaikinIterations() const { return ReadField<int>("chaikinIterations"); }
        void chaikinIterations(int value) const { WriteField<int>("chaikinIterations", value); }
        float rdpEpsilon() const { return ReadField<float>("rdpEpsilon"); }
        void rdpEpsilon(float value) const { WriteField<float>("rdpEpsilon", value); }
        int thresholdR() const { return ReadField<int>("thresholdR"); }
        void thresholdR(int value) const { WriteField<int>("thresholdR", value); }
        bool dilate() const { return ReadField<bool>("dilate"); }
        void dilate(bool value) const { WriteField<bool>("dilate", value); }
        int closeRadius() const { return ReadField<int>("closeRadius"); }
        void closeRadius(int value) const { WriteField<int>("closeRadius", value); }
        void* cacheDir() const { return ReadField<void*>("cacheDir"); }
        void cacheDir(void* value) const { WriteField<void*>("cacheDir", value); }
    };
}
