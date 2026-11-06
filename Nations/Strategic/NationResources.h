#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class NationResources : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationResources(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "NationResources") {}
    public:
        float FreeProduction(int k) const { void* args[] = { &k }; return CallValue<float>("FreeProduction", args, 1); }
        float FreeField(int k) const { void* args[] = { &k }; return CallValue<float>("FreeField", args, 1); }
        void* points() const { return ReadField<void*>("points"); }
        void* market() const { return ReadField<void*>("market"); }
        void* marketUnits() const { return ReadField<void*>("marketUnits"); }
        void* rightsIn() const { return ReadField<void*>("rightsIn"); }
        void* rightsOut() const { return ReadField<void*>("rightsOut"); }
        void* production() const { return ReadField<void*>("production"); }
        void* field() const { return ReadField<void*>("field"); }
        void* productionUsed() const { return ReadField<void*>("productionUsed"); }
        void* fieldUsed() const { return ReadField<void*>("fieldUsed"); }
        int idleUnorganized() const { return ReadField<int>("idleUnorganized"); }
        void SetIdleUnorganized(int value) const { WriteField<int>("idleUnorganized", value); }
        void* lineScale() const { return ReadField<void*>("lineScale"); }
        float forgeScale() const { return ReadField<float>("forgeScale"); }
        void SetForgeScale(float value) const { WriteField<float>("forgeScale", value); }
        int stamp() const { return ReadField<int>("stamp"); }
        void SetStamp(int value) const { WriteField<int>("stamp", value); }
    };
}
