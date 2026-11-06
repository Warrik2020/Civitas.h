#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Relation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Relation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Relation") {}
    public:
        bool SkirmishLive(int violator) const { void* args[] = { &violator }; return CallValue<bool>("SkirmishLive", args, 1); }
        void ClearIncursionEpisodes() const { Call("ClearIncursionEpisodes", nullptr, 0); }
        int Other(int self) const { void* args[] = { &self }; return CallValue<int>("Other", args, 1); }
        float OpinionOf(int self) const { void* args[] = { &self }; return CallValue<float>("OpinionOf", args, 1); }
        float GoodwillOf(int self) const { void* args[] = { &self }; return CallValue<float>("GoodwillOf", args, 1); }
        void AddGoodwillToward(int actor, float amount, float max) const { void* args[] = { &actor, &amount, &max }; Call("AddGoodwillToward", args, 3); }
        float GrudgeOf(int self) const { void* args[] = { &self }; return CallValue<float>("GrudgeOf", args, 1); }
        void AddGrudgeFor(int holder, float amount, float max) const { void* args[] = { &holder, &amount, &max }; Call("AddGrudgeFor", args, 3); }
        float InfraFrictionOf(int self) const { void* args[] = { &self }; return CallValue<float>("InfraFrictionOf", args, 1); }
        void AddInfraFrictionFor(int holder, float amount, float max) const { void* args[] = { &holder, &amount, &max }; Call("AddInfraFrictionFor", args, 3); }
        float WearinessOf(int self) const { void* args[] = { &self }; return CallValue<float>("WearinessOf", args, 1); }
        int TileSnapshotOf(int self) const { void* args[] = { &self }; return CallValue<int>("TileSnapshotOf", args, 1); }
        int LostCapitalOf(int self) const { void* args[] = { &self }; return CallValue<int>("LostCapitalOf", args, 1); }
        void SetLostCapital(int self, int tile) const { void* args[] = { &self, &tile }; Call("SetLostCapital", args, 2); }
        float CasualtiesOf(int self) const { void* args[] = { &self }; return CallValue<float>("CasualtiesOf", args, 1); }
        float WarScoreFor(int self) const { void* args[] = { &self }; return CallValue<float>("WarScoreFor", args, 1); }
        void AddWarScoreFor(int self, float amount, float clamp) const { void* args[] = { &self, &amount, &clamp }; Call("AddWarScoreFor", args, 3); }
        void AddCasualtiesFor(int self, float amount) const { void* args[] = { &self, &amount }; Call("AddCasualtiesFor", args, 2); }
        void Reset() const { Call("Reset", nullptr, 0); }
        int64_t Key(int idA, int idB) const { void* args[] = { &idA, &idB }; return CallStaticValue<int64_t>("Key", args, 2); }
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
        float grudgeAB() const { return ReadField<float>("grudgeAB"); }
        void SetGrudgeAB(float value) const { WriteField<float>("grudgeAB", value); }
        float grudgeBA() const { return ReadField<float>("grudgeBA"); }
        void SetGrudgeBA(float value) const { WriteField<float>("grudgeBA", value); }
        float infraFrictionAB() const { return ReadField<float>("infraFrictionAB"); }
        void SetInfraFrictionAB(float value) const { WriteField<float>("infraFrictionAB", value); }
        float infraFrictionBA() const { return ReadField<float>("infraFrictionBA"); }
        void SetInfraFrictionBA(float value) const { WriteField<float>("infraFrictionBA", value); }
        int borderContacts() const { return ReadField<int>("borderContacts"); }
        void SetBorderContacts(int value) const { WriteField<int>("borderContacts", value); }
        int landBorder() const { return ReadField<int>("landBorder"); }
        void SetLandBorder(int value) const { WriteField<int>("landBorder", value); }
        float seaGap() const { return ReadField<float>("seaGap"); }
        void SetSeaGap(float value) const { WriteField<float>("seaGap", value); }
        bool overseasWar() const { return ReadField<bool>("overseasWar"); }
        void SetOverseasWar(bool value) const { WriteField<bool>("overseasWar", value); }
        float recentPressure() const { return ReadField<float>("recentPressure"); }
        void SetRecentPressure(float value) const { WriteField<float>("recentPressure", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        int warDeclaredTick() const { return ReadField<int>("warDeclaredTick"); }
        void SetWarDeclaredTick(int value) const { WriteField<int>("warDeclaredTick", value); }
        int declarerId() const { return ReadField<int>("declarerId"); }
        void SetDeclarerId(int value) const { WriteField<int>("declarerId", value); }
        bool independenceWar() const { return ReadField<bool>("independenceWar"); }
        void SetIndependenceWar(bool value) const { WriteField<bool>("independenceWar", value); }
        int independenceRebelId() const { return ReadField<int>("independenceRebelId"); }
        void SetIndependenceRebelId(int value) const { WriteField<int>("independenceRebelId", value); }
        bool endlessWar() const { return ReadField<bool>("endlessWar"); }
        void SetEndlessWar(bool value) const { WriteField<bool>("endlessWar", value); }
        float wearinessA() const { return ReadField<float>("wearinessA"); }
        void SetWearinessA(float value) const { WriteField<float>("wearinessA", value); }
        float wearinessB() const { return ReadField<float>("wearinessB"); }
        void SetWearinessB(float value) const { WriteField<float>("wearinessB", value); }
        float warScore() const { return ReadField<float>("warScore"); }
        void SetWarScore(float value) const { WriteField<float>("warScore", value); }
        int truceUntilTick() const { return ReadField<int>("truceUntilTick"); }
        void SetTruceUntilTick(int value) const { WriteField<int>("truceUntilTick", value); }
        int tileSnapshotA() const { return ReadField<int>("tileSnapshotA"); }
        void SetTileSnapshotA(int value) const { WriteField<int>("tileSnapshotA", value); }
        int tileSnapshotB() const { return ReadField<int>("tileSnapshotB"); }
        void SetTileSnapshotB(int value) const { WriteField<int>("tileSnapshotB", value); }
        int lostCapitalA() const { return ReadField<int>("lostCapitalA"); }
        void SetLostCapitalA(int value) const { WriteField<int>("lostCapitalA", value); }
        int lostCapitalB() const { return ReadField<int>("lostCapitalB"); }
        void SetLostCapitalB(int value) const { WriteField<int>("lostCapitalB", value); }
        bool conquestLedgerClosed() const { return ReadField<bool>("conquestLedgerClosed"); }
        void SetConquestLedgerClosed(bool value) const { WriteField<bool>("conquestLedgerClosed", value); }
        int suesForPeaceTick() const { return ReadField<int>("suesForPeaceTick"); }
        void SetSuesForPeaceTick(int value) const { WriteField<int>("suesForPeaceTick", value); }
        int suesForPeaceBy() const { return ReadField<int>("suesForPeaceBy"); }
        void SetSuesForPeaceBy(int value) const { WriteField<int>("suesForPeaceBy", value); }
        float casualtiesA() const { return ReadField<float>("casualtiesA"); }
        void SetCasualtiesA(float value) const { WriteField<float>("casualtiesA", value); }
        float casualtiesB() const { return ReadField<float>("casualtiesB"); }
        void SetCasualtiesB(float value) const { WriteField<float>("casualtiesB", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void SetAllied(bool value) const { WriteField<bool>("allied", value); }
        bool defensivePact() const { return ReadField<bool>("defensivePact"); }
        void SetDefensivePact(bool value) const { WriteField<bool>("defensivePact", value); }
        bool accessAinB() const { return ReadField<bool>("accessAinB"); }
        void SetAccessAinB(bool value) const { WriteField<bool>("accessAinB", value); }
        bool accessBinA() const { return ReadField<bool>("accessBinA"); }
        void SetAccessBinA(bool value) const { WriteField<bool>("accessBinA", value); }
        float tradeLink() const { return ReadField<float>("tradeLink"); }
        void SetTradeLink(float value) const { WriteField<float>("tradeLink", value); }
        float tradeVolume() const { return ReadField<float>("tradeVolume"); }
        void SetTradeVolume(float value) const { WriteField<float>("tradeVolume", value); }
        int tradeAnchorA() const { return ReadField<int>("tradeAnchorA"); }
        void SetTradeAnchorA(int value) const { WriteField<int>("tradeAnchorA", value); }
        int tradeAnchorB() const { return ReadField<int>("tradeAnchorB"); }
        void SetTradeAnchorB(int value) const { WriteField<int>("tradeAnchorB", value); }
        int nextImproveTick() const { return ReadField<int>("nextImproveTick"); }
        void SetNextImproveTick(int value) const { WriteField<int>("nextImproveTick", value); }
        int envoyRepeatBy() const { return ReadField<int>("envoyRepeatBy"); }
        void SetEnvoyRepeatBy(int value) const { WriteField<int>("envoyRepeatBy", value); }
        int nextUltimatumTick() const { return ReadField<int>("nextUltimatumTick"); }
        void SetNextUltimatumTick(int value) const { WriteField<int>("nextUltimatumTick", value); }
        int refusedUntilAB() const { return ReadField<int>("refusedUntilAB"); }
        void SetRefusedUntilAB(int value) const { WriteField<int>("refusedUntilAB", value); }
        int refusedUntilBA() const { return ReadField<int>("refusedUntilBA"); }
        void SetRefusedUntilBA(int value) const { WriteField<int>("refusedUntilBA", value); }
        int nextRequestTick() const { return ReadField<int>("nextRequestTick"); }
        void SetNextRequestTick(int value) const { WriteField<int>("nextRequestTick", value); }
        int nextPeaceOfferTick() const { return ReadField<int>("nextPeaceOfferTick"); }
        void SetNextPeaceOfferTick(int value) const { WriteField<int>("nextPeaceOfferTick", value); }
        int nextPlayerPeaceTick() const { return ReadField<int>("nextPlayerPeaceTick"); }
        void SetNextPlayerPeaceTick(int value) const { WriteField<int>("nextPlayerPeaceTick", value); }
        int nextAllianceOfferTick() const { return ReadField<int>("nextAllianceOfferTick"); }
        void SetNextAllianceOfferTick(int value) const { WriteField<int>("nextAllianceOfferTick", value); }
        int nextTradeOfferTick() const { return ReadField<int>("nextTradeOfferTick"); }
        void SetNextTradeOfferTick(int value) const { WriteField<int>("nextTradeOfferTick", value); }
        int nextUnionOfferTick() const { return ReadField<int>("nextUnionOfferTick"); }
        void SetNextUnionOfferTick(int value) const { WriteField<int>("nextUnionOfferTick", value); }
        int unionBondFor() const { return ReadField<int>("unionBondFor"); }
        void SetUnionBondFor(int value) const { WriteField<int>("unionBondFor", value); }
        int nextAnnexRequestTick() const { return ReadField<int>("nextAnnexRequestTick"); }
        void SetNextAnnexRequestTick(int value) const { WriteField<int>("nextAnnexRequestTick", value); }
        int nextVassalageRequestTick() const { return ReadField<int>("nextVassalageRequestTick"); }
        void SetNextVassalageRequestTick(int value) const { WriteField<int>("nextVassalageRequestTick", value); }
        int nextVassalAnnexDemandTick() const { return ReadField<int>("nextVassalAnnexDemandTick"); }
        void SetNextVassalAnnexDemandTick(int value) const { WriteField<int>("nextVassalAnnexDemandTick", value); }
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
    };
}
