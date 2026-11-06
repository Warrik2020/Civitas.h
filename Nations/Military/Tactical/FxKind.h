#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FxKind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FxKind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FxKind") {}
    public:
        uint8_t Tracer() const { return ReadStaticField<uint8_t>("Tracer"); }
        uint8_t Flash() const { return ReadStaticField<uint8_t>("Flash"); }
        uint8_t Smoke() const { return ReadStaticField<uint8_t>("Smoke"); }
        uint8_t Blood() const { return ReadStaticField<uint8_t>("Blood"); }
        uint8_t Dust() const { return ReadStaticField<uint8_t>("Dust"); }
        uint8_t Burst() const { return ReadStaticField<uint8_t>("Burst"); }
        uint8_t Scorch() const { return ReadStaticField<uint8_t>("Scorch"); }
        uint8_t ShellDot() const { return ReadStaticField<uint8_t>("ShellDot"); }
        uint8_t WreckSmoke() const { return ReadStaticField<uint8_t>("WreckSmoke"); }
        uint8_t BloodPool() const { return ReadStaticField<uint8_t>("BloodPool"); }
        uint8_t Glint() const { return ReadStaticField<uint8_t>("Glint"); }
    };
}
