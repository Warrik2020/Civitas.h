#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class WorksLine : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksLine(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "WorksLine") {}
    public:
        int start() const { return ReadField<int>("start"); }
        void start(int value) const { WriteField<int>("start", value); }
        int count() const { return ReadField<int>("count"); }
        void count(int value) const { WriteField<int>("count", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        float halfWidthMetres() const { return ReadField<float>("halfWidthMetres"); }
        void halfWidthMetres(float value) const { WriteField<float>("halfWidthMetres", value); }
        float dug() const { return ReadField<float>("dug"); }
        void dug(float value) const { WriteField<float>("dug", value); }
    };
}
