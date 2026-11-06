#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class WorksSeg : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksSeg(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "WorksSeg") {}
    public:
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void SetB(void* value) const { WriteField<void*>("b", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void SetHalfWidth(float value) const { WriteField<float>("halfWidth", value); }
        uint8_t cover() const { return ReadField<uint8_t>("cover"); }
        void SetCover(uint8_t value) const { WriteField<uint8_t>("cover", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void SetKind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        int16_t group() const { return ReadField<int16_t>("group"); }
        void SetGroup(int16_t value) const { WriteField<int16_t>("group", value); }
    };
}
