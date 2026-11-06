#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class BorderInk : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderInk(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "BorderInk") {}
    public:
        void* GradeOwner(void* srgb) const { void* __callArgs[] = { srgb }; return Call("GradeOwner", __callArgs, 1); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        void* StyledBorder(void* s, void* classic) const { void* __callArgs[] = { s, classic }; return CallStatic("StyledBorder", __callArgs, 2); }
        bool IsWater(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<bool>("IsWater", __callArgs, 2); }
        void* style() const { return ReadField<void*>("style"); }
        void* bandT() const { return ReadField<void*>("bandT"); }
        void* bandA() const { return ReadField<void*>("bandA"); }
        bool fitInside() const { return ReadField<bool>("fitInside"); }
        float wobbleTiles() const { return ReadField<float>("wobbleTiles"); }
        float wavelengthTiles() const { return ReadField<float>("wavelengthTiles"); }
        void* land() const { return ReadField<void*>("land"); }
        int w() const { return ReadField<int>("w"); }
        int h() const { return ReadField<int>("h"); }
    };
}
