#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class DotKind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DotKind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "DotKind") {}
    public:
        uint8_t Infantry() const { return ReadStaticField<uint8_t>("Infantry"); }
        uint8_t Cavalry() const { return ReadStaticField<uint8_t>("Cavalry"); }
        uint8_t Tank() const { return ReadStaticField<uint8_t>("Tank"); }
        uint8_t Gun() const { return ReadStaticField<uint8_t>("Gun"); }
        uint8_t Corpse() const { return ReadStaticField<uint8_t>("Corpse"); }
        uint8_t Wreck() const { return ReadStaticField<uint8_t>("Wreck"); }
        uint8_t Tracer() const { return ReadStaticField<uint8_t>("Tracer"); }
        uint8_t Smoke() const { return ReadStaticField<uint8_t>("Smoke"); }
        uint8_t Flash() const { return ReadStaticField<uint8_t>("Flash"); }
        uint8_t Blood() const { return ReadStaticField<uint8_t>("Blood"); }
        uint8_t Burst() const { return ReadStaticField<uint8_t>("Burst"); }
        uint8_t Dust() const { return ReadStaticField<uint8_t>("Dust"); }
        uint8_t Scorch() const { return ReadStaticField<uint8_t>("Scorch"); }
        uint8_t ShellDot() const { return ReadStaticField<uint8_t>("ShellDot"); }
        uint8_t Glint() const { return ReadStaticField<uint8_t>("Glint"); }
        uint8_t Truck() const { return ReadStaticField<uint8_t>("Truck"); }
    };
}
