#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class GloryMemory : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GloryMemory(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "GloryMemory") {}
    public:
        int peopleKey() const { return ReadField<int>("peopleKey"); }
        void SetPeopleKey(int value) const { WriteField<int>("peopleKey", value); }
        int formerNationId() const { return ReadField<int>("formerNationId"); }
        void SetFormerNationId(int value) const { WriteField<int>("formerNationId", value); }
        void* formerName() const { return ReadField<void*>("formerName"); }
        void SetFormerName(void* value) const { WriteField<void*>("formerName", value); }
        void* formerColor() const { return ReadField<void*>("formerColor"); }
        void SetFormerColor(void* value) const { WriteField<void*>("formerColor", value); }
        int peakTiles() const { return ReadField<int>("peakTiles"); }
        void SetPeakTiles(int value) const { WriteField<int>("peakTiles", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void* weights() const { return ReadField<void*>("weights"); }
        int fallWorldTick() const { return ReadField<int>("fallWorldTick"); }
        void SetFallWorldTick(int value) const { WriteField<int>("fallWorldTick", value); }
        float wound() const { return ReadField<float>("wound"); }
        void SetWound(float value) const { WriteField<float>("wound", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        int cause() const { return ReadField<int>("cause"); }
        void SetCause(int value) const { WriteField<int>("cause", value); }
        float fallShare() const { return ReadField<float>("fallShare"); }
        void SetFallShare(float value) const { WriteField<float>("fallShare", value); }
        int heirId() const { return ReadField<int>("heirId"); }
        void SetHeirId(int value) const { WriteField<int>("heirId", value); }
        float heirShare() const { return ReadField<float>("heirShare"); }
        void SetHeirShare(float value) const { WriteField<float>("heirShare", value); }
        void* holders() const { return ReadField<void*>("holders"); }
    };
}
