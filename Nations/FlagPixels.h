#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagPixels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagPixels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagPixels") {}
    public:
        bool TryGet(void* n, void* px, int& w, int& h) const { void* args[] = { n, &px, &w, &h }; return CallStaticValue<bool>("TryGet", args, 4); }
        bool TryGet(void* n, void* px, int& w, int& h, int& rim) const { void* args[] = { n, &px, &w, &h, &rim }; return CallStaticValue<bool>("TryGet", args, 5); }
        void Invalidate(int nationId) const { void* args[] = { &nationId }; CallStatic("Invalidate", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* src() const { return ReadField<void*>("src"); }
        void SetSrc(void* value) const { WriteField<void*>("src", value); }
        void* px() const { return ReadField<void*>("px"); }
        void SetPx(void* value) const { WriteField<void*>("px", value); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        int rim() const { return ReadField<int>("rim"); }
        void SetRim(int value) const { WriteField<int>("rim", value); }
    };
}
