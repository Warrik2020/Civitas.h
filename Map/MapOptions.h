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
        int AutoDownsample(int srcW, int srcH) const { void* args[] = { &srcW, &srcH }; return CallStaticValue<int>("AutoDownsample", args, 2); }
        int ResolveDownsample(int srcW, int srcH) const { void* args[] = { &srcW, &srcH }; return CallValue<int>("ResolveDownsample", args, 2); }
        void Grid(int srcW, int srcH, int downsample, float scale, int& w, int& h, float& spanTiles) const { void* args[] = { &srcW, &srcH, &downsample, &scale, &w, &h, &spanTiles }; CallStatic("Grid", args, 7); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        int simDownsample() const { return ReadField<int>("simDownsample"); }
        void SetSimDownsample(int value) const { WriteField<int>("simDownsample", value); }
        float simScale() const { return ReadField<float>("simScale"); }
        void SetSimScale(float value) const { WriteField<float>("simScale", value); }
        int minIslandArea() const { return ReadField<int>("minIslandArea"); }
        void SetMinIslandArea(int value) const { WriteField<int>("minIslandArea", value); }
        int minHoleArea() const { return ReadField<int>("minHoleArea"); }
        void SetMinHoleArea(int value) const { WriteField<int>("minHoleArea", value); }
        int chaikinIterations() const { return ReadField<int>("chaikinIterations"); }
        void SetChaikinIterations(int value) const { WriteField<int>("chaikinIterations", value); }
        float rdpEpsilon() const { return ReadField<float>("rdpEpsilon"); }
        void SetRdpEpsilon(float value) const { WriteField<float>("rdpEpsilon", value); }
        int thresholdR() const { return ReadField<int>("thresholdR"); }
        void SetThresholdR(int value) const { WriteField<int>("thresholdR", value); }
        bool dilate() const { return ReadField<bool>("dilate"); }
        void SetDilate(bool value) const { WriteField<bool>("dilate", value); }
        int closeRadius() const { return ReadField<int>("closeRadius"); }
        void SetCloseRadius(int value) const { WriteField<int>("closeRadius", value); }
        void* cacheDir() const { return ReadField<void*>("cacheDir"); }
        void SetCacheDir(void* value) const { WriteField<void*>("cacheDir", value); }
    };
}
