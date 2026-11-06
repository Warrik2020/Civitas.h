#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class NationFlagAtlas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationFlagAtlas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "NationFlagAtlas") {}
    public:
        bool TryGetUv(int nationId, void* uv, bool& darkText) const { void* args[] = { &nationId, &uv, &darkText }; return CallStaticValue<bool>("TryGetUv", args, 3); }
        bool Ensure(void* militaries, void* nationOf) const { void* args[] = { militaries, nationOf }; return CallStaticValue<bool>("Ensure", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        int fw() const { return ReadField<int>("fw"); }
        void SetFw(int value) const { WriteField<int>("fw", value); }
        int fh() const { return ReadField<int>("fh"); }
        void SetFh(int value) const { WriteField<int>("fh", value); }
        void* px() const { return ReadField<void*>("px"); }
        void SetPx(void* value) const { WriteField<void*>("px", value); }
        bool dark() const { return ReadField<bool>("dark"); }
        void SetDark(bool value) const { WriteField<bool>("dark", value); }
        int x() const { return ReadField<int>("x"); }
        void SetX(int value) const { WriteField<int>("x", value); }
        int y() const { return ReadField<int>("y"); }
        void SetY(int value) const { WriteField<int>("y", value); }
    };
}
