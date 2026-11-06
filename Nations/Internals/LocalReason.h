#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalReason : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalReason(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalReason") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        float points() const { return ReadField<float>("points"); }
        void points(float value) const { WriteField<float>("points", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int thirdId() const { return ReadField<int>("thirdId"); }
        void thirdId(int value) const { WriteField<int>("thirdId", value); }
        int sinceWorldTick() const { return ReadField<int>("sinceWorldTick"); }
        void sinceWorldTick(int value) const { WriteField<int>("sinceWorldTick", value); }
        int fadesWorldTick() const { return ReadField<int>("fadesWorldTick"); }
        void fadesWorldTick(int value) const { WriteField<int>("fadesWorldTick", value); }
        bool live() const { return ReadField<bool>("live"); }
        void live(bool value) const { WriteField<bool>("live", value); }
    };
}
