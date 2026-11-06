#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class WorksDisc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksDisc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "WorksDisc") {}
    public:
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        uint8_t cover() const { return ReadField<uint8_t>("cover"); }
        void SetCover(uint8_t value) const { WriteField<uint8_t>("cover", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void SetKind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        int16_t group() const { return ReadField<int16_t>("group"); }
        void SetGroup(int16_t value) const { WriteField<int16_t>("group", value); }
    };
}
