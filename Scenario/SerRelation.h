#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerRelation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerRelation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerRelation") {}
    public:
        int a() const { return ReadField<int>("a"); }
        void SetA(int value) const { WriteField<int>("a", value); }
        int b() const { return ReadField<int>("b"); }
        void SetB(int value) const { WriteField<int>("b", value); }
        float opinionAB() const { return ReadField<float>("opinionAB"); }
        void SetOpinionAB(float value) const { WriteField<float>("opinionAB", value); }
        float opinionBA() const { return ReadField<float>("opinionBA"); }
        void SetOpinionBA(float value) const { WriteField<float>("opinionBA", value); }
        float goodwillAB() const { return ReadField<float>("goodwillAB"); }
        void SetGoodwillAB(float value) const { WriteField<float>("goodwillAB", value); }
        float goodwillBA() const { return ReadField<float>("goodwillBA"); }
        void SetGoodwillBA(float value) const { WriteField<float>("goodwillBA", value); }
        int envoyRepeatBy() const { return ReadField<int>("envoyRepeatBy"); }
        void SetEnvoyRepeatBy(int value) const { WriteField<int>("envoyRepeatBy", value); }
        float grudgeAB() const { return ReadField<float>("grudgeAB"); }
        void SetGrudgeAB(float value) const { WriteField<float>("grudgeAB", value); }
        float grudgeBA() const { return ReadField<float>("grudgeBA"); }
        void SetGrudgeBA(float value) const { WriteField<float>("grudgeBA", value); }
        float infraFrictionAB() const { return ReadField<float>("infraFrictionAB"); }
        void SetInfraFrictionAB(float value) const { WriteField<float>("infraFrictionAB", value); }
        float infraFrictionBA() const { return ReadField<float>("infraFrictionBA"); }
        void SetInfraFrictionBA(float value) const { WriteField<float>("infraFrictionBA", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void SetAllied(bool value) const { WriteField<bool>("allied", value); }
        bool defensivePact() const { return ReadField<bool>("defensivePact"); }
        void SetDefensivePact(bool value) const { WriteField<bool>("defensivePact", value); }
        bool independenceWar() const { return ReadField<bool>("independenceWar"); }
        void SetIndependenceWar(bool value) const { WriteField<bool>("independenceWar", value); }
        int independenceRebelId() const { return ReadField<int>("independenceRebelId"); }
        void SetIndependenceRebelId(int value) const { WriteField<int>("independenceRebelId", value); }
        bool endlessWar() const { return ReadField<bool>("endlessWar"); }
        void SetEndlessWar(bool value) const { WriteField<bool>("endlessWar", value); }
        float warScore() const { return ReadField<float>("warScore"); }
        void SetWarScore(float value) const { WriteField<float>("warScore", value); }
        float casualtiesA() const { return ReadField<float>("casualtiesA"); }
        void SetCasualtiesA(float value) const { WriteField<float>("casualtiesA", value); }
        float casualtiesB() const { return ReadField<float>("casualtiesB"); }
        void SetCasualtiesB(float value) const { WriteField<float>("casualtiesB", value); }
        int borderContacts() const { return ReadField<int>("borderContacts"); }
        void SetBorderContacts(int value) const { WriteField<int>("borderContacts", value); }
        int warDeclaredTick() const { return ReadField<int>("warDeclaredTick"); }
        void SetWarDeclaredTick(int value) const { WriteField<int>("warDeclaredTick", value); }
        int warAgeTicks() const { return ReadField<int>("warAgeTicks"); }
        void SetWarAgeTicks(int value) const { WriteField<int>("warAgeTicks", value); }
        float wearinessA() const { return ReadField<float>("wearinessA"); }
        void SetWearinessA(float value) const { WriteField<float>("wearinessA", value); }
        float wearinessB() const { return ReadField<float>("wearinessB"); }
        void SetWearinessB(float value) const { WriteField<float>("wearinessB", value); }
        int lostCapitalA() const { return ReadField<int>("lostCapitalA"); }
        void SetLostCapitalA(int value) const { WriteField<int>("lostCapitalA", value); }
        int lostCapitalB() const { return ReadField<int>("lostCapitalB"); }
        void SetLostCapitalB(int value) const { WriteField<int>("lostCapitalB", value); }
        float incHeatAinB() const { return ReadField<float>("incHeatAinB"); }
        void SetIncHeatAinB(float value) const { WriteField<float>("incHeatAinB", value); }
        float incHeatBinA() const { return ReadField<float>("incHeatBinA"); }
        void SetIncHeatBinA(float value) const { WriteField<float>("incHeatBinA", value); }
        int incTierAinB() const { return ReadField<int>("incTierAinB"); }
        void SetIncTierAinB(int value) const { WriteField<int>("incTierAinB", value); }
        int incTierBinA() const { return ReadField<int>("incTierBinA"); }
        void SetIncTierBinA(int value) const { WriteField<int>("incTierBinA", value); }
        int incFlagsAinB() const { return ReadField<int>("incFlagsAinB"); }
        void SetIncFlagsAinB(int value) const { WriteField<int>("incFlagsAinB", value); }
        int incFlagsBinA() const { return ReadField<int>("incFlagsBinA"); }
        void SetIncFlagsBinA(int value) const { WriteField<int>("incFlagsBinA", value); }
        int passageTicksAinB() const { return ReadField<int>("passageTicksAinB"); }
        void SetPassageTicksAinB(int value) const { WriteField<int>("passageTicksAinB", value); }
        int passageTicksBinA() const { return ReadField<int>("passageTicksBinA"); }
        void SetPassageTicksBinA(int value) const { WriteField<int>("passageTicksBinA", value); }
        int expelTicksAinB() const { return ReadField<int>("expelTicksAinB"); }
        void SetExpelTicksAinB(int value) const { WriteField<int>("expelTicksAinB", value); }
        int expelTicksBinA() const { return ReadField<int>("expelTicksBinA"); }
        void SetExpelTicksBinA(int value) const { WriteField<int>("expelTicksBinA", value); }
        int protestTicksAinB() const { return ReadField<int>("protestTicksAinB"); }
        void SetProtestTicksAinB(int value) const { WriteField<int>("protestTicksAinB", value); }
        int protestTicksBinA() const { return ReadField<int>("protestTicksBinA"); }
        void SetProtestTicksBinA(int value) const { WriteField<int>("protestTicksBinA", value); }
        int pledgeTicksAinB() const { return ReadField<int>("pledgeTicksAinB"); }
        void SetPledgeTicksAinB(int value) const { WriteField<int>("pledgeTicksAinB", value); }
        int pledgeTicksBinA() const { return ReadField<int>("pledgeTicksBinA"); }
        void SetPledgeTicksBinA(int value) const { WriteField<int>("pledgeTicksBinA", value); }
        int graceTicksAinB() const { return ReadField<int>("graceTicksAinB"); }
        void SetGraceTicksAinB(int value) const { WriteField<int>("graceTicksAinB", value); }
        int graceTicksBinA() const { return ReadField<int>("graceTicksBinA"); }
        void SetGraceTicksBinA(int value) const { WriteField<int>("graceTicksBinA", value); }
        int episodeTicksAinB() const { return ReadField<int>("episodeTicksAinB"); }
        void SetEpisodeTicksAinB(int value) const { WriteField<int>("episodeTicksAinB", value); }
        int episodeTicksBinA() const { return ReadField<int>("episodeTicksBinA"); }
        void SetEpisodeTicksBinA(int value) const { WriteField<int>("episodeTicksBinA", value); }
        int justifyTicksAB() const { return ReadField<int>("justifyTicksAB"); }
        void SetJustifyTicksAB(int value) const { WriteField<int>("justifyTicksAB", value); }
        int justifyTicksBA() const { return ReadField<int>("justifyTicksBA"); }
        void SetJustifyTicksBA(int value) const { WriteField<int>("justifyTicksBA", value); }
        bool accessAinB() const { return ReadField<bool>("accessAinB"); }
        void SetAccessAinB(bool value) const { WriteField<bool>("accessAinB", value); }
        bool accessBinA() const { return ReadField<bool>("accessBinA"); }
        void SetAccessBinA(bool value) const { WriteField<bool>("accessBinA", value); }
        int unionOfferTicksLeft() const { return ReadField<int>("unionOfferTicksLeft"); }
        void SetUnionOfferTicksLeft(int value) const { WriteField<int>("unionOfferTicksLeft", value); }
        int unionBondFor() const { return ReadField<int>("unionBondFor"); }
        void SetUnionBondFor(int value) const { WriteField<int>("unionBondFor", value); }
        int truceLeft() const { return ReadField<int>("truceLeft"); }
        void SetTruceLeft(int value) const { WriteField<int>("truceLeft", value); }
        int improveLeft() const { return ReadField<int>("improveLeft"); }
        void SetImproveLeft(int value) const { WriteField<int>("improveLeft", value); }
        int ultimatumLeft() const { return ReadField<int>("ultimatumLeft"); }
        void SetUltimatumLeft(int value) const { WriteField<int>("ultimatumLeft", value); }
        int peaceOfferLeft() const { return ReadField<int>("peaceOfferLeft"); }
        void SetPeaceOfferLeft(int value) const { WriteField<int>("peaceOfferLeft", value); }
        int playerPeaceLeft() const { return ReadField<int>("playerPeaceLeft"); }
        void SetPlayerPeaceLeft(int value) const { WriteField<int>("playerPeaceLeft", value); }
        int allianceOfferLeft() const { return ReadField<int>("allianceOfferLeft"); }
        void SetAllianceOfferLeft(int value) const { WriteField<int>("allianceOfferLeft", value); }
        int tradeOfferLeft() const { return ReadField<int>("tradeOfferLeft"); }
        void SetTradeOfferLeft(int value) const { WriteField<int>("tradeOfferLeft", value); }
        int requestLeft() const { return ReadField<int>("requestLeft"); }
        void SetRequestLeft(int value) const { WriteField<int>("requestLeft", value); }
        int annexRequestLeft() const { return ReadField<int>("annexRequestLeft"); }
        void SetAnnexRequestLeft(int value) const { WriteField<int>("annexRequestLeft", value); }
        int vassalageRequestLeft() const { return ReadField<int>("vassalageRequestLeft"); }
        void SetVassalageRequestLeft(int value) const { WriteField<int>("vassalageRequestLeft", value); }
        int vassalAnnexDemandLeft() const { return ReadField<int>("vassalAnnexDemandLeft"); }
        void SetVassalAnnexDemandLeft(int value) const { WriteField<int>("vassalAnnexDemandLeft", value); }
        int refusedLeftAB() const { return ReadField<int>("refusedLeftAB"); }
        void SetRefusedLeftAB(int value) const { WriteField<int>("refusedLeftAB", value); }
        int refusedLeftBA() const { return ReadField<int>("refusedLeftBA"); }
        void SetRefusedLeftBA(int value) const { WriteField<int>("refusedLeftBA", value); }
        void* ledgerTiles() const { return ReadField<void*>("ledgerTiles"); }
        void SetLedgerTiles(void* value) const { WriteField<void*>("ledgerTiles", value); }
        void* ledgerOwners() const { return ReadField<void*>("ledgerOwners"); }
        void SetLedgerOwners(void* value) const { WriteField<void*>("ledgerOwners", value); }
        int tileSnapshotA() const { return ReadField<int>("tileSnapshotA"); }
        void SetTileSnapshotA(int value) const { WriteField<int>("tileSnapshotA", value); }
        int tileSnapshotB() const { return ReadField<int>("tileSnapshotB"); }
        void SetTileSnapshotB(int value) const { WriteField<int>("tileSnapshotB", value); }
        int declarerId() const { return ReadField<int>("declarerId"); }
        void SetDeclarerId(int value) const { WriteField<int>("declarerId", value); }
    };
}
