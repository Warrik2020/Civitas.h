#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class DotGpu : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DotGpu(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "DotGpu") {}
    public:
        uint32_t Pack(uint8_t kind, uint8_t state, float rotRad, float sizeTiles) const { void* __callArgs[] = { &kind, &state, &rotRad, &sizeTiles }; return CallStaticValue<uint32_t>("Pack", __callArgs, 4); }
        uint32_t PackDir(uint8_t kind, uint8_t state, uint8_t rot, float sizeTiles) const { void* __callArgs[] = { &kind, &state, &rot, &sizeTiles }; return CallStaticValue<uint32_t>("PackDir", __callArgs, 4); }
        uint32_t PackDir(uint8_t kind, uint8_t state, uint8_t rot, float sizeTiles, uint8_t pose) const { void* __callArgs[] = { &kind, &state, &rot, &sizeTiles, &pose }; return CallStaticValue<uint32_t>("PackDir", __callArgs, 5); }
        float SizeOf_(uint32_t packed) const { void* __callArgs[] = { &packed }; return CallStaticValue<float>("SizeOf", __callArgs, 1); }
        uint8_t PoseOf(uint32_t packed) const { void* __callArgs[] = { &packed }; return CallStaticValue<uint8_t>("PoseOf", __callArgs, 1); }
        uint8_t Dir(float rotRad) const { void* __callArgs[] = { &rotRad }; return CallStaticValue<uint8_t>("Dir", __callArgs, 1); }
        uint32_t Rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) const { void* __callArgs[] = { &r, &g, &b, &a }; return CallStaticValue<uint32_t>("Rgba", __callArgs, 4); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        uint32_t packed() const { return ReadField<uint32_t>("packed"); }
        void packed(uint32_t value) const { WriteField<uint32_t>("packed", value); }
        uint32_t rgba() const { return ReadField<uint32_t>("rgba"); }
        void rgba(uint32_t value) const { WriteField<uint32_t>("rgba", value); }
        float SizeMinTiles() const { return ReadStaticField<float>("SizeMinTiles"); }
        float SizeMaxTiles() const { return ReadStaticField<float>("SizeMaxTiles"); }
    };
}
