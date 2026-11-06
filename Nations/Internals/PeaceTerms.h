#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceTerms") {}
    public:
        void CollectTakenTiles(void* dst) const { void* args[] = { dst }; Call("CollectTakenTiles", args, 1); }
        void* GrantFor(int nationId) const { void* args[] = { &nationId }; return Call("GrantFor", args, 1); }
        int loserId() const { return ReadField<int>("loserId"); }
        void SetLoserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        void* annexTiles() const { return ReadField<void*>("annexTiles"); }
        void* carves() const { return ReadField<void*>("carves"); }
        void* grants() const { return ReadField<void*>("grants"); }
        void* cosigners() const { return ReadField<void*>("cosigners"); }
        void* expulsions() const { return ReadField<void*>("expulsions"); }
        bool grantsDrawn() const { return ReadField<bool>("grantsDrawn"); }
        void SetGrantsDrawn(bool value) const { WriteField<bool>("grantsDrawn", value); }
        bool vassalizeLoser() const { return ReadField<bool>("vassalizeLoser"); }
        void SetVassalizeLoser(bool value) const { WriteField<bool>("vassalizeLoser", value); }
        void* loserIdeology() const { return ReadField<void*>("loserIdeology"); }
        void SetLoserIdeology(void* value) const { WriteField<void*>("loserIdeology", value); }
        bool annexLoser() const { return ReadField<bool>("annexLoser"); }
        void SetAnnexLoser(bool value) const { WriteField<bool>("annexLoser", value); }
        float gold() const { return ReadField<float>("gold"); }
        void SetGold(float value) const { WriteField<float>("gold", value); }
        int factories() const { return ReadField<int>("factories"); }
        void SetFactories(int value) const { WriteField<int>("factories", value); }
        float populationFraction() const { return ReadField<float>("populationFraction"); }
        void SetPopulationFraction(float value) const { WriteField<float>("populationFraction", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        bool freeTheirVassals() const { return ReadField<bool>("freeTheirVassals"); }
        void SetFreeTheirVassals(bool value) const { WriteField<bool>("freeTheirVassals", value); }
        bool breakTheirAlliances() const { return ReadField<bool>("breakTheirAlliances"); }
        void SetBreakTheirAlliances(bool value) const { WriteField<bool>("breakTheirAlliances", value); }
    };
}
