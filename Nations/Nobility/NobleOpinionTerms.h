#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class NobleOpinionTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobleOpinionTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "NobleOpinionTerms") {}
    public:
        float land() const { return ReadField<float>("land"); }
        void land(float value) const { WriteField<float>("land", value); }
        float demesne() const { return ReadField<float>("demesne"); }
        void demesne(float value) const { WriteField<float>("demesne", value); }
        float revoked() const { return ReadField<float>("revoked"); }
        void revoked(float value) const { WriteField<float>("revoked", value); }
        float alarm() const { return ReadField<float>("alarm"); }
        void alarm(float value) const { WriteField<float>("alarm", value); }
        float gifts() const { return ReadField<float>("gifts"); }
        void gifts(float value) const { WriteField<float>("gifts", value); }
        float honours() const { return ReadField<float>("honours"); }
        void honours(float value) const { WriteField<float>("honours", value); }
        float tax() const { return ReadField<float>("tax"); }
        void tax(float value) const { WriteField<float>("tax", value); }
        float levies() const { return ReadField<float>("levies"); }
        void levies(float value) const { WriteField<float>("levies", value); }
        float war() const { return ReadField<float>("war"); }
        void war(float value) const { WriteField<float>("war", value); }
        float ruler() const { return ReadField<float>("ruler"); }
        void ruler(float value) const { WriteField<float>("ruler", value); }
        float ambition() const { return ReadField<float>("ambition"); }
        void ambition(float value) const { WriteField<float>("ambition", value); }
        float demandsMet() const { return ReadField<float>("demandsMet"); }
        void demandsMet(float value) const { WriteField<float>("demandsMet", value); }
        float demandsRefused() const { return ReadField<float>("demandsRefused"); }
        void demandsRefused(float value) const { WriteField<float>("demandsRefused", value); }
    };
}
