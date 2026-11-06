#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class AdvisorBase : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AdvisorBase(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "AdvisorBase") {}
    public:
        void* design() const { return ReadField<void*>("design"); }
        void SetDesign(void* value) const { WriteField<void*>("design", value); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        bool mirrorOn() const { return ReadField<bool>("mirrorOn"); }
        void SetMirrorOn(bool value) const { WriteField<bool>("mirrorOn", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        void* trial() const { return ReadField<void*>("trial"); }
        void SetTrial(void* value) const { WriteField<void*>("trial", value); }
        void* blockingTexts() const { return ReadField<void*>("blockingTexts"); }
        void* blockingParts() const { return ReadField<void*>("blockingParts"); }
        bool wholeDesignBlocking() const { return ReadField<bool>("wholeDesignBlocking"); }
        void SetWholeDesignBlocking(bool value) const { WriteField<bool>("wholeDesignBlocking", value); }
    };
}
