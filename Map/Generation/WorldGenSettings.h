#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class WorldGenSettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldGenSettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "WorldGenSettings") {}
    public:
        void* Clone() const { return Call("Clone", nullptr, 0); }
        void Clamp() const { Call("Clamp", nullptr, 0); }
        void* Key() const { return Call("Key", nullptr, 0); }
        void* ToString() const { return Call("ToString", nullptr, 0); }
        void* Algorithm() const { return ReadStaticField<void*>("Algorithm"); }
        int MinDimension() const { return ReadStaticField<int>("MinDimension"); }
        int MaxDimension() const { return ReadStaticField<int>("MaxDimension"); }
        int seed() const { return ReadField<int>("seed"); }
        void seed(int value) const { WriteField<int>("seed", value); }
        int width() const { return ReadField<int>("width"); }
        void width(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void height(int value) const { WriteField<int>("height", value); }
        float land() const { return ReadField<float>("land"); }
        void land(float value) const { WriteField<float>("land", value); }
        float islands() const { return ReadField<float>("islands"); }
        void islands(float value) const { WriteField<float>("islands", value); }
        float coast() const { return ReadField<float>("coast"); }
        void coast(float value) const { WriteField<float>("coast", value); }
    };
}
