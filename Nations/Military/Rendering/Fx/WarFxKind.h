#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFxKind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFxKind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFxKind") {}
    public:
        uint8_t Flash() const { return ReadStaticField<uint8_t>("Flash"); }
        uint8_t Glow() const { return ReadStaticField<uint8_t>("Glow"); }
        uint8_t Tracer() const { return ReadStaticField<uint8_t>("Tracer"); }
        uint8_t Smoke() const { return ReadStaticField<uint8_t>("Smoke"); }
        uint8_t Dust() const { return ReadStaticField<uint8_t>("Dust"); }
        uint8_t Fireball() const { return ReadStaticField<uint8_t>("Fireball"); }
        uint8_t Ring() const { return ReadStaticField<uint8_t>("Ring"); }
        uint8_t Clod() const { return ReadStaticField<uint8_t>("Clod"); }
        uint8_t Spark() const { return ReadStaticField<uint8_t>("Spark"); }
        uint8_t Crater() const { return ReadStaticField<uint8_t>("Crater"); }
        uint8_t Scorch() const { return ReadStaticField<uint8_t>("Scorch"); }
        uint8_t Ember() const { return ReadStaticField<uint8_t>("Ember"); }
        uint8_t Shell() const { return ReadStaticField<uint8_t>("Shell"); }
        uint8_t Shadow() const { return ReadStaticField<uint8_t>("Shadow"); }
        uint8_t Blood() const { return ReadStaticField<uint8_t>("Blood"); }
        uint8_t Wisp() const { return ReadStaticField<uint8_t>("Wisp"); }
    };
}
