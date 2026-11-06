#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class DivisionIconAtlas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionIconAtlas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "DivisionIconAtlas") {}
    public:
        void Ensure(float aspect, float shadeFloor) const { void* args[] = { &aspect, &shadeFloor }; CallStatic("Ensure", args, 2); }
        bool TryGetUv(int type, void* uv) const { void* args[] = { &type, &uv }; return CallStaticValue<bool>("TryGetUv", args, 2); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        void* px() const { return ReadField<void*>("px"); }
        void SetPx(void* value) const { WriteField<void*>("px", value); }
        int x() const { return ReadField<int>("x"); }
        void SetX(int value) const { WriteField<int>("x", value); }
        int y() const { return ReadField<int>("y"); }
        void SetY(int value) const { WriteField<int>("y", value); }
    };
}
