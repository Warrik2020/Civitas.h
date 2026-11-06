#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class WorksDisc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksDisc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "WorksDisc") {}
    public:
        void* centre() const { return ReadField<void*>("centre"); }
        void centre(void* value) const { WriteField<void*>("centre", value); }
        float radiusMetres() const { return ReadField<float>("radiusMetres"); }
        void radiusMetres(float value) const { WriteField<float>("radiusMetres", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int cluster() const { return ReadField<int>("cluster"); }
        void cluster(int value) const { WriteField<int>("cluster", value); }
    };
}
